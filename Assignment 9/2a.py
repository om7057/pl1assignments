start = int(input("Enter the start of the range: "))
end = int(input("Enter the end of the range: "))

print("Prime numbers in the range", start, "to", end, "are:")
current_number = start

while current_number <= end:
    if current_number > 1:
        is_prime = True
        for i in range(2, int(current_number ** 0.5) + 1):
            if current_number % i == 0:
                is_prime = False
                break
        if is_prime:
            print(current_number)
    current_number += 1
