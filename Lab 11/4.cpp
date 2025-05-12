#include <iostream>
#include <stdexcept>
using namespace std;

class InsufficientFundsException : public runtime_error {
public:
    InsufficientFundsException() : runtime_error("You got less money. Insufficient funds to complete withdrawal!") {}
};

class BankAccount {
private:
    double balance;
public:
    BankAccount(double initialBalance) : balance(initialBalance) {}
    
    void withdraw(double amount) {
        if (amount > balance) {
            throw InsufficientFundsException();
        }
        balance -= amount;
    }
    
    double getBalance() const { return balance; }
};

int main() 
{
    BankAccount account(500);
    
    cout << "Current Balance in RS: " << account.getBalance() << endl;
    cout << "Enter withdrawal amount in RS: ";
    double amount;
    cin >> amount;
    
    try {
        account.withdraw(amount);
        cout << "Withdrawal succeeed! New Balance is RS: " << account.getBalance() << endl;
    } catch (const InsufficientFundsException &e) {
        cout << "Error 404: " << e.what() << endl;
    }
    
    return 0;
}