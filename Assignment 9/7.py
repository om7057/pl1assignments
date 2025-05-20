input_file_name = "input.txt"
output_file_name = "output.txt"

try:
    with open(input_file_name, 'r') as input_file:
        input_content = input_file.read()

    modified_content = ' '.join(input_content.split())

    with open(output_file_name, 'w') as output_file:
        output_file.write(modified_content)

    print(f"Consecutive spaces removed and saved to {output_file_name}")
except FileNotFoundError:
    print(f"File '{input_file_name}' not found.")
except Exception as e:
    print(f"An error occurred: {e}")
