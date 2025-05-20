# def swap_with_temp(a, b):
#     temp = a
#     a = b
#     b = temp
#     return a, b


# num1 = 5
# num2 = 10
# num1, num2 = swap_with_temp(num1, num2)
# print("After swapping (with temp): num1 =", num1, "num2 =", num2)

def swap_without_temp(a, b):
    a = a + b
    b = a - b
    a = a - b
    return a, b


num1 = 5
num2 = 10
num1, num2 = swap_without_temp(num1, num2)
print("After swapping (without temp): num1 =", num1, "num2 =", num2)
