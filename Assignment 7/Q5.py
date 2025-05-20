
# height = float(input("Enter your height (in meters): "))
# weight = float(input("Enter your weight (in kilograms): "))

# bmi = weight / (height ** 2)


# print("Your BMI is:", bmi)


userInputHeight = int(input("Enter the height of the person(cm):\n"))
userInputWeight = int(input("Enter the weight of the person(kg):\n"))
HeightInMetres = userInputHeight / 100
BMI = userInputWeight / (HeightInMetres ** 2)

print(BMI)
