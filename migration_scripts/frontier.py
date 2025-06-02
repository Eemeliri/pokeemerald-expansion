import re
import json
import os

class PokemonAbilityValidator:
    def __init__(self):
        self.species_abilities = {}
        
    def extract_species_abilities_from_generations(self, root_path=".", output_file_path="species_abilities.json"):
        """
        Extract species names and their abilities from all generation header files
        """
        print(f"Reading species data from generation files in: {root_path}")
        
        self.species_abilities = {}  # Reset the dictionary
        total_species_found = 0
        
        # Iterate through all 9 generations
        for gen in range(1, 10):
            gen_file = os.path.join(root_path, f"gen_{gen}_families.h")
            
            print(f"\nProcessing {gen_file}...")
            
            try:
                with open(gen_file, 'r', encoding='utf-8') as file:
                    content = file.read()
            except FileNotFoundError:
                print(f"Warning: Could not find file {gen_file} - skipping")
                continue
                
            # Pattern to match species entries - more flexible to handle different formatting
            species_pattern = r'\[SPECIES_(\w+)\]\s*=\s*\{(.*?)\},?\s*(?=\n\s*(?:\[SPECIES_|\#endif|\#if|$))'
            
            # Find all species entries
            species_matches = re.findall(species_pattern, content, re.DOTALL)
            
            if not species_matches:
                print(f"No species data found in {gen_file}")
                continue
                
            print(f"Found {len(species_matches)} species entries in generation {gen}")
            gen_species_count = 0
            
            for species_name, species_data in species_matches:
                full_species_name = f"SPECIES_{species_name}"
                
                # Extract abilities from the species data - more flexible pattern
                abilities_pattern = r'\.abilities\s*=\s*\{\s*([^}]+)\s*\}'
                abilities_match = re.search(abilities_pattern, species_data)
                
                if abilities_match:
                    abilities_str = abilities_match.group(1)
                    # Split by comma and clean up
                    abilities = [ability.strip() for ability in abilities_str.split(',') if ability.strip()]
                    # Filter out empty abilities (ABILITY_NONE)
                    valid_abilities = [ability for ability in abilities if ability and ability != 'ABILITY_NONE']
                    
                    if valid_abilities:  # Only add if there are valid abilities
                        self.species_abilities[full_species_name] = valid_abilities
                        gen_species_count += 1
                        total_species_found += 1
                        print(f"  {full_species_name}: {valid_abilities}")
                    else:
                        print(f"  Warning: No valid abilities found for {full_species_name} (only ABILITY_NONE)")
                else:
                    print(f"  Warning: No abilities pattern found for {full_species_name}")
                    # Debug: show a snippet of the species data to understand the structure
                    snippet = species_data[:200].replace('\n', ' ')
                    print(f"    Data snippet: {snippet}...")
            
            print(f"Successfully processed {gen_species_count} species from generation {gen}")
                
        if total_species_found == 0:
            print("Error: No species data found in any generation files")
            return False
            
        # Save to JSON file
        with open(output_file_path, 'w') as file:
            json.dump(self.species_abilities, file, indent=2)
            
        print(f"\n=== SUMMARY ===")
        print(f"Total species processed: {total_species_found}")
        print(f"Species abilities saved to: {output_file_path}")
        return True
    
    def extract_species_abilities(self, species_file_path, output_file_path="species_abilities.json"):
        """
        Extract species names and their abilities from a single species info header file
        (Kept for backwards compatibility)
        """
        print(f"Reading species data from: {species_file_path}")
        
        try:
            with open(species_file_path, 'r', encoding='utf-8') as file:
                content = file.read()
        except FileNotFoundError:
            print(f"Error: Could not find file {species_file_path}")
            return False
            
        # Pattern to match species entries - updated for better matching
        species_pattern = r'\[SPECIES_(\w+)\]\s*=\s*\{(.*?)\},?\s*(?=\n\s*(?:\[SPECIES_|\#endif|\#if|$))'
        
        # Find all species entries
        species_matches = re.findall(species_pattern, content, re.DOTALL)
        
        if not species_matches:
            print("No species data found in the file")
            return False
            
        print(f"Found {len(species_matches)} species entries")
        
        for species_name, species_data in species_matches:
            full_species_name = f"SPECIES_{species_name}"
            
            # Extract abilities from the species data
            abilities_pattern = r'\.abilities\s*=\s*\{\s*([^}]+)\s*\}'
            abilities_match = re.search(abilities_pattern, species_data)
            
            if abilities_match:
                abilities_str = abilities_match.group(1)
                # Split by comma and clean up
                abilities = [ability.strip() for ability in abilities_str.split(',')]
                # Filter out empty abilities (ABILITY_NONE)
                valid_abilities = [ability for ability in abilities if ability and ability != 'ABILITY_NONE']
                
                self.species_abilities[full_species_name] = valid_abilities
                print(f"{full_species_name}: {valid_abilities}")
            else:
                print(f"Warning: No abilities found for {full_species_name}")
                
        # Save to JSON file
        with open(output_file_path, 'w') as file:
            json.dump(self.species_abilities, file, indent=2)
            
        print(f"Species abilities saved to: {output_file_path}")
        return True
    
    def load_species_abilities(self, abilities_file_path="species_abilities.json"):
        """
        Load species abilities from JSON file
        """
        try:
            with open(abilities_file_path, 'r') as file:
                self.species_abilities = json.load(file)
            print(f"Loaded abilities for {len(self.species_abilities)} species")
            return True
        except FileNotFoundError:
            print(f"Error: Could not find abilities file {abilities_file_path}")
            return False
    
    def validate_and_fix_trainer_mons(self, trainer_file_path, output_file_path=None):
        """
        Validate and fix abilities in trainer mon data
        """
        if not self.species_abilities:
            print("Error: No species abilities loaded. Run extract_species_abilities first.")
            return False
            
        print(f"Reading trainer data from: {trainer_file_path}")
        
        try:
            with open(trainer_file_path, 'r', encoding='utf-8') as file:
                content = file.read()
        except FileNotFoundError:
            print(f"Error: Could not find file {trainer_file_path}")
            return False
        
        trainer_mon_pattern = r'(\[FRONTIER_MON_[^\]]+\]\s*=\s*\{)((?:[^{}]*\{[^{}]*\}[^{}]*|[^{}])*?)(\},?\s*)'
        
        fixes_made = 0
        new_content = content
        
        def fix_trainer_mon(match):
            nonlocal fixes_made
            opening = match.group(1)
            mon_data = match.group(2)
            closing = match.group(3)
            
            # Extract frontier mon name for debugging
            frontier_name_match = re.search(r'\[([^\]]+)\]', opening)
            frontier_name = frontier_name_match.group(1) if frontier_name_match else "UNKNOWN"
            
            print(f"Processing: {frontier_name}")
            
            # Extract species - more flexible pattern
            species_match = re.search(r'\.species\s*=\s*(SPECIES_[A-Z_0-9]+)', mon_data, re.MULTILINE)
            if not species_match:
                print(f"  Warning: No species found in entry")
                # Debug: show first 100 chars of mon_data
                debug_data = mon_data.replace('\n', ' ').replace('\t', ' ')[:100]
                print(f"  Debug data: {debug_data}...")
                return match.group(0)  # Return original if no species found
                
            species = species_match.group(1)
            print(f"  Found species: {species}")
            
            # Extract current ability - more flexible pattern
            ability_match = re.search(r'\.ability\s*=\s*(ABILITY_[A-Z_0-9]+)', mon_data, re.MULTILINE)
            if not ability_match:
                print(f"  Warning: No ability found for {species}")
                # Debug: show first 200 chars of mon_data
                debug_data = mon_data.replace('\n', ' ').replace('\t', ' ')[:200]
                print(f"  Debug data: {debug_data}...")
                return match.group(0)  # Return original if no ability found
                
            current_ability = ability_match.group(1)
            print(f"  Found ability: {current_ability}")
            
            # Check if species exists in our database
            if species not in self.species_abilities:
                print(f"  Warning: {species} not found in species database")
                return match.group(0)
                
            valid_abilities = self.species_abilities[species]
            if not valid_abilities:
                print(f"  Warning: No valid abilities found for {species}")
                return match.group(0)
                
            # Check if current ability is valid
            if current_ability in valid_abilities:
                # Ability is valid, no change needed
                print(f"  ✓ {species}: {current_ability} is VALID")
                return match.group(0)
                
            # Fix the ability
            new_ability = valid_abilities[0]  # Use first valid ability
            print(f"  ✗ FIXING {species}: {current_ability} -> {new_ability}")
            print(f"    Valid abilities: {valid_abilities}")
            
            # Replace the ability in the mon data
            new_mon_data = re.sub(
                r'\.ability\s*=\s*ABILITY_[A-Z_0-9]+',
                f'.ability = {new_ability}',
                mon_data
            )
            
            fixes_made += 1
            return opening + new_mon_data + closing
        
        # Apply fixes
        matches_found = 0
        def count_and_fix(match):
            nonlocal matches_found
            matches_found += 1
            return fix_trainer_mon(match)
            
        new_content = re.sub(trainer_mon_pattern, count_and_fix, content, flags=re.DOTALL | re.MULTILINE)
        
        print(f"\n=== VALIDATION SUMMARY ===")
        print(f"Found {matches_found} trainer mon entries to check")
        
        if fixes_made > 0:
            output_path = output_file_path or f"{trainer_file_path}.fixed"
            with open(output_path, 'w', encoding='utf-8') as file:
                file.write(new_content)
            print(f"Fixed {fixes_made} invalid abilities. Output saved to: {output_path}")
        else:
            print("No fixes needed - all abilities are valid!")
            
        return True

def main():
    validator = PokemonAbilityValidator()
    
    print("Pokemon Ability Validator and Fixer")
    print("=" * 40)
    
    while True:
        print("\nOptions:")
        print("1. Extract species abilities from all generation files (gen_1_families.h to gen_9_families.h)")
        print("2. Extract species abilities from single header file")
        print("3. Load existing species abilities file")
        print("4. Validate and fix trainer mon abilities")
        print("5. Exit")
        
        choice = input("\nEnter your choice (1-5): ").strip()
        
        if choice == '1':
            root_path = input("Enter root directory path (or press Enter for current directory): ").strip()
            if not root_path:
                root_path = "."
            output_file = input("Enter output JSON file name (or press Enter for 'species_abilities.json'): ").strip()
            if not output_file:
                output_file = "species_abilities.json"
            validator.extract_species_abilities_from_generations(root_path, output_file)
            
        elif choice == '2':
            species_file = input("Enter path to species header file: ").strip()
            output_file = input("Enter output JSON file name (or press Enter for 'species_abilities.json'): ").strip()
            if not output_file:
                output_file = "species_abilities.json"
            validator.extract_species_abilities(species_file, output_file)
            
        elif choice == '3':
            abilities_file = input("Enter path to abilities JSON file (or press Enter for 'species_abilities.json'): ").strip()
            if not abilities_file:
                abilities_file = "species_abilities.json"
            validator.load_species_abilities(abilities_file)
            
        elif choice == '4':
            if not validator.species_abilities:
                print("Please load species abilities first (option 1, 2, or 3)")
                continue
                
            trainer_file = input("Enter path to trainer mon header file: ").strip()
            output_file = input("Enter output file path (or press Enter to auto-generate): ").strip()
            if not output_file:
                output_file = None
            validator.validate_and_fix_trainer_mons(trainer_file, output_file)
            
        elif choice == '5':
            print("Goodbye!")
            break
            
        else:
            print("Invalid choice. Please enter 1-5.")

if __name__ == "__main__":
    main()