
num_list = input("Enter a list of numbers separated by spaces: ").split()

num_list = [int(num) for num in num_list]


if not num_list:
    print("The list is empty.")
else:
   
    largest = max(num_list)
    smallest = min(num_list)

    
    print("Largest number:", largest)
    print("Smallest number:", smallest)
