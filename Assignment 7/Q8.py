# def factorial(n):
#     if n == 0:
#         return 1
#     else:
#         return n * factorial(n - 1)


# num = int(input("Enter a positive integer: "))

# if num < 0:
#     print("Factorial is undefined for negative numbers.")
# else:
#     result = factorial(num)
#     print(f"The factorial of {num} is {result}")


def factcalc(n):
    if n>1:
        return n*factcalc(n-1)
    else:
        return 1
    

n=int(input("Enter a positive integer whose factorial is to be calculated:\n"))

if n<0:
    print("You've entered a negative integer please enter a positive one.")
else:
    answer=factcalc(n)
    print("Factorial of the number is: "+str(answer))