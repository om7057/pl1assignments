age = int(input("Please enter your age: "))
grade = int(input("Please enter your grade: "))

if age >= 18:
    if grade >= 9:
        print("You are old enough and in a high enough grade to graduate soon. Make the most of your education!")
    else:
        print("You are old enough to make important decisions about your future. Keep working hard in school.")
else:
    if grade < 9:
        print("You have plenty of time to learn and grow. Enjoy your school years.")
    else:
        print("You're young, but you're in a higher grade. Keep up the good work in school!")

# Optional: You can add more personalized messages based on specific age and grade ranges as needed.
