
start = 1
end = 10

for i in range(start, end + 1):
    print(f"Multiplication table for {i}:")
    for j in range(1, 11):
        product = i * j
        print(f"{i} x {j} = {product}")
    print()  
