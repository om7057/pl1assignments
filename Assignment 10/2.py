N = int(input("Enter the value of N: "))

fibonacci_sequence = []
a, b = 0, 1  


count = 0
while count < N:
    fibonacci_sequence.append(a)
    a, b = b, a + b  
    count += 1


print("The first", N, "Fibonacci numbers are:")
print(fibonacci_sequence)
