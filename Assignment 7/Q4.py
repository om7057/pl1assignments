
# kilometers = float(input("Enter the distance in kilometers: "))

# meters = kilometers * 1000
# centimeters = kilometers * 100000
# millimeters = kilometers * 1000000


# print(f"{kilometers} kilometers is equal to:")
# print(f"{meters} meters")
# print(f"{centimeters} centimeters")
# print(f"{millimeters} millimeters")


# Using if elif else

# userInputUnit=input("Enter the unit in which you want to convert the given Km(m/cm/mm):\n")
# userInputValue=int(input("Enter the value to be converted:\n"))

# if(userInputUnit=='m'):
#     answer=userInputValue*1000
#     print(answer)

# elif(userInputUnit=='cm'):
#     answer=100*userInputValue
#     print(answer)

# elif(userInputUnit=='mm'):
#     answer=10*userInputValue
#     print(answer)

# else:
#     print("Please run the program again and choose a valid unit to convert into")

userInputValue = int(input("Enter the value to be converted:\n"))

print("Answer in meters:")
answer1 = userInputValue * 1000
print(answer1)

print("Answer in centimeters:")
answer2 = 100 * userInputValue
print(answer2)

print("Answer in millimeters:")
answer3 = 10 * userInputValue
print(answer3)
