def add(x, y):
    return x + y

def subtract(x, y):
    return x - y

def multiply(x, y):
    return x * y

def divide(x, y):
    if y == 0:
        return "Cannot divide by zero"
    return x / y

while True:
   
    print("Options:")
    print("Enter 'add' for addition")
    print("Enter 'subtract' for subtraction")
    print("Enter 'multiply' for multiplication")
    print("Enter 'divide' for division")
    print("Enter 'exit' to end the program")

   
    user_input = input(": ")

    if user_input == "exit":
        break  
    
    if user_input not in ("add", "subtract", "multiply", "divide"):
        print("Invalid input. Please try again.")
        continue  
    num1 = float(input("Enter the first number: "))
    num2 = float(input("Enter the second number: "))

    if user_input == "add":
        print("Result:", add(num1, num2))
    elif user_input == "subtract":
        print("Result:", subtract(num1, num2))
    elif user_input == "multiply":
        print("Result:", multiply(num1, num2))
    elif user_input == "divide":
        print("Result:", divide(num1, num2))
