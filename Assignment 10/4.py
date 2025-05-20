
num_list = input("Enter a list of numbers separated by spaces: ").split()

num_list = [float(num) for num in num_list]


total = sum(num_list)


average = total / len(num_list)


print("Sum:", total)
print("Average:", average)
