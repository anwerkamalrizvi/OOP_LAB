#include <iostream>
using namespace std;

class Money 
{
public:
    double amount;
    string code;
    string symbol;
    static double dollar;
    static double euro;
    static double rupee;

    Money(double amount, string code, string symbol) : amount(amount), code(code), symbol(symbol) {}

    virtual double exchange() = 0;

    double change_to(string target) 
    {
        double value = 1.0;

        if (target == "PKR")
            value = rupee;
        else if (target == "USD")
            value = dollar;
        else if (target == "EUR")
            value = euro;
        else
        {
            cout << "Unknown currency" << endl;
            return 1;
        }
        return exchange() / value;
    }

    virtual void show() = 0;
};

double Money::rupee = 1.0;
double Money::dollar = 275.0;
double Money::euro = 295.0;

class USD : public Money 
{
public:
    USD(double amount) : Money(amount, "USD", "$") {}
    double exchange() override 
    { 
        return amount * dollar; 
    }
    void show() override 
    { 
        cout << symbol << amount << " (" << code << ")" << endl;
    }
};

class EUR : public Money 
{
public:
    EUR(double amount) : Money(amount, "EUR", "€") {}
    double exchange() override 
    { 
        return amount * euro; 
    }
    void show() override 
    { 
        cout << symbol << amount << " (" << code << ")" << endl; 
    }
};

class PKR : public Money 
{
public:
    PKR(double amount) : Money(amount, "PKR", "Rs") {}
    double exchange() override 
    { 
        return amount; 
    }
    void show() override 
    { 
        cout << symbol << amount << " (" << code << ")" << endl; 
    }
};

int main() 
{
    USD a(150);
    EUR b(80);
    PKR c(12000);
    a.show();
    b.show();
    c.show();
    cout << "12000 PKR in USD: " << c.change_to("USD") << " USD" << endl;
    cout << "12000 PKR in EUR: " << c.change_to("EUR") << " EUR" << endl;

    return 0;
}
