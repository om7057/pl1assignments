def is_prime(num):
    if num <= 1:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def print_primes_up_to(limit):
    for number in range(2, limit + 1):
        if is_prime(number):
            print(number, end=" ")

limit = int(input("Enter a number: "))

if limit < 2:
    print("There are no prime numbers less than 2.")
else:
    print("Prime numbers up to", limit, "are:")
    print_primes_up_to(limit)
