def is_palindrome(input_string):
    clean_string = input_string.replace(" ", "").lower()
    return clean_string == clean_string[::-1]

input_string = "racecar"
if is_palindrome(input_string):
    print(f"'{input_string}' is a palindrome.")
else:
    print(f"'{input_string}' is not a palindrome.")
