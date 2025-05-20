balance = 0

def check_balance():
    print(f"Your balance is ${balance:.2f}")

def withdraw_money(amount):
    global balance
    if amount > balance:
        print("Insufficient funds.")
    else:
        balance -= amount
        print(f"You have withdrawn ${amount:.2f}. Your new balance is ${balance:.2f}")

def deposit_money(amount):
    global balance
    balance += amount
    print(f"You have deposited ${amount:.2f}. Your new balance is ${balance:.2f}")

while True:
    print("\nWelcome to the Simple ATM")
    print("1. Check Balance")
    print("2. Withdraw Money")
    print("3. Deposit Money")
    print("4. Exit")
    
    choice = input("Enter your choice (1/2/3/4): ")
    
    if choice == '1':
        check_balance()
    elif choice == '2':
        amount = float(input("Enter the amount to withdraw: $"))
        withdraw_money(amount)
    elif choice == '3':
        amount = float(input("Enter the amount to deposit: $"))
        deposit_money(amount)
    elif choice == '4':
        print("Thank you for using the ATM. Goodbye!")
        break
    else:
        print("Invalid choice. Please choose 1, 2, 3, or 4.")
