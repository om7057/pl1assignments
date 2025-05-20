def calculate_statistics(numbers):
    if not numbers:
        return None  
    total = sum(numbers)
    average = total / len(numbers)
    maximum = max(numbers)
    
    return average, total, maximum

number_list = [12, 34, 56, 78, 90, 123]
result = calculate_statistics(number_list)

if result is not None:
    average, total, maximum = result
    print(f"Average: {average:.2f}")
    print(f"Sum: {total}")
    print(f"Maximum: {maximum}")
else:
    print("List is empty.")
