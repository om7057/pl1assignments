input_file = "input.py"  
output_file = "output.py"  

try:
    with open(input_file, 'r') as infile, open(output_file, 'w') as outfile:
        for line in infile:
            if not line.strip().startswith("#"):
                outfile.write(line)

    print(f"Comments removed. The code is saved in {output_file}")
except FileNotFoundError:
    print(f"File not found: {input_file}")
except Exception as e:
    print(f"An error occurred: {str(e)}")
