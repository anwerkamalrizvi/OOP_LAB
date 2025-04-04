#include <iostream>
using namespace std;

class Account {
public:
    int aNum;
    double bal;
    string aHold;
    string aTyp;

    Account(int an, double b, string ah, string at) : aNum(an), bal(b), aHold(ah), aTyp(at) {}
    virtual void deposit(double amt) 
    {
        bal += amt;
    }
    
    virtual bool withdraw(double amt) 
    {
        if (amt > bal) 
        {
            cout << "not enough balance" << endl;
            return false;
        }

        bal -= amt;
        return true;
    }
    
    virtual void calc_int()= 0;
    virtual void print_statement() = 0;
    
    void display_info() 
    {
        cout << "account nmber: " << aNum << "\n" << "account holder: " << aHold << "\nbalance: " << bal << endl << "account type: " << aTyp << endl;
    }

};

class SavingsAccount : public Account{
public:
    double iRat;
    double minBal;
    SavingsAccount(int an, double b, string ah, double r, double m) : Account(an, b, ah, "Savings"), iRat(r), minBal(m) {}
    void calc_int() override 
    {
        bal += bal * (iRat / 100);
    }
    bool withdraw(double amt) override 
    {
        if (bal - amt < minBal) {
            cout << "can't withdraw" << endl;
            return false;
        }
        return Account::withdraw(amt);
    }
    void print_statement() override 
    {
        cout << "savings acc: " << aHold << "\nbalance: " << bal << endl;
    }
};

class CheckingAccount : public Account 
{
public:
    CheckingAccount(int accNum, double bal, string holder) : Account(accNum, bal, holder, "Checking") {}
    
    void calc_int() override {}
    
    void print_statement() override 
    {
        cout << "checking account: " << aHold << "\nbalance: " << bal << endl;
    }
};

class FixedDepositAccount : public Account 
{
public:
    double iFix;
    int mat; //mature

    FixedDepositAccount(int accNum, double bal, string holder, double rate, int period) : Account(accNum, bal, holder, "Fixed Deposit"), iFix(rate), mat(period) {}
    
    void calc_int() override 
    {
        bal += bal * (iFix / 100) * mat;
    }
    
    bool withdraw(double amt) override 
    {
        cout << "cannot withdraw" << endl;
        return false;
    }
    
    void print_statement() override 
    {
        cout << "fixed deposit account: " << aHold << endl;
        cout << "balance: " << bal << endl;
    }
};

int main() 
{
    SavingsAccount savings(240033, 100000, "Anwer", 2.5, 500);
    savings.deposit(30000);
    savings.withdraw(8400);
    savings.calc_int();
    savings.print_statement();
    return 0;
}