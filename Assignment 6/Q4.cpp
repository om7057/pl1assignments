#include <iostream>
#include <vector>

class NegativeBalanceException {
public:
    const char* what() const {
        return "NegativeBalanceException: Withdrawal exceeds account balance.";
    }
};

class InvalidAmountException {
public:
    const char* what() const {
        return "InvalidAmountException: Amount must be positive.";
    }
};

class BankAccount {
private:
    static int nextAccountNumber;
    int accountNumber;
    std::string accountHolderName;
    double balance;

public:
    BankAccount(const std::string& name) : accountHolderName(name), balance(0.0) {
        accountNumber = nextAccountNumber++;
    }

    int getAccountNumber() const {
        return accountNumber;
    }

    double getBalance() const {
        return balance;
    }

    void deposit(double amount) {
        if (amount <= 0) {
            throw InvalidAmountException();
        }
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            throw InvalidAmountException();
        }
        if (balance < amount) {
            throw NegativeBalanceException();
        }
        balance -= amount;
    }
};

int BankAccount::nextAccountNumber = 1;

int main() {
    std::vector<BankAccount> accounts;
    int choice;

    while (true) {
        std::cout << "\nBanking System Menu:\n";
        std::cout << "1. Create a new account\n";
        std::cout << "2. Deposit money\n";
        std::cout << "3. Withdraw money\n";
        std::cout << "4. Check account balance\n";
        std::cout << "5. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string name;
                std::cout << "Enter account holder's name: ";
                std::cin >> name;
                BankAccount account(name);
                accounts.push_back(account);
                std::cout << "Account created with number " << account.getAccountNumber() << std::endl;
                break;
            }

            case 2: {
                int accountNumber;
                double amount;
                std::cout << "Enter account number: ";
                std::cin >> accountNumber;
                std::cout << "Enter the deposit amount: ";
                std::cin >> amount;

                for (BankAccount& account : accounts) {
                    if (account.getAccountNumber() == accountNumber) {
                        try {
                            account.deposit(amount);
                            std::cout << "Deposit successful. New balance: " << account.getBalance() << std::endl;
                        } catch (const InvalidAmountException& e) {
                            std::cerr << e.what() << std::endl;
                        }
                        break;
                    }
                }
                break;
            }

            case 3: {
                int accountNumber;
                double amount;
                std::cout << "Enter account number: ";
                std::cin >> accountNumber;
                std::cout << "Enter the withdrawal amount: ";
                std::cin >> amount;

                for (BankAccount& account : accounts) {
                    if (account.getAccountNumber() == accountNumber) {
                        try {
                            account.withdraw(amount);
                            std::cout << "Withdrawal successful. New balance: " << account.getBalance() << std::endl;
                        } catch (const InvalidAmountException& e) {
                            std::cerr << e.what() << std::endl;
                        } catch (const NegativeBalanceException& e) {
                            std::cerr << e.what() << std::endl;
                        }
                        break;
                    }
                }
                break;
            }

            case 4: {
                int accountNumber;
                std::cout << "Enter account number: ";
                std::cin >> accountNumber;

                for (const BankAccount& account : accounts) {
                    if (account.getAccountNumber() == accountNumber) {
                        std::cout << "Account balance: " << account.getBalance() << std::endl;
                        break;
                    }
                }
                break;
            }

            case 5:
                std::cout << "Exiting the program." << std::endl;
                return 0;

            default:
                std::cerr << "Invalid choice. Please try again." << std::endl;
                break;
        }
    }

    return 0;
}
