/*
Design an Employee class that takes care of the not-so-fun part of earning money—taxes! Start
.....................................................................................................
little they’re left with. It’s a perfect reminder that the only thing certain in life is taxes and less
money!
*/

#include <iostream>
using namespace std;

class Employee
{
private:

    string name;
    double monSal;
    double taxPercent;


public:
    void data()
    {
        cout << "Enter employee name: ";

        cin >> name;
        cout << "Enter monthly salary: ";
        cin >> monSal;

         cout << " Enter tax percetage: ";
        cin >> taxPercent;
    }

    double salAfterTax()
    {
        return monSal - (monSal * (taxPercent / 100));
    }

    void updTaxPercent(double newTax)
    {
        taxPercent = newTax;
        cout << "New tax percentage set to " << taxPercent << "%" << endl;
    }

    void showSal()
    {
        cout << "\nEmployee: " << name << endl;
        cout << "Monthly Salary: $" << monSal << endl;
        cout << "Tax Percentage: " << taxPercent << "%" << endl;
        cout << "Salary after tax: $" << salAfterTax() << endl;
    }
};

int main()
{
    Employee emp;
    emp.data();
    emp.showSal();

    double newTax;
    cout << "\nEnter new tax percentage to update: ";
    cin >> newTax;
    emp.updTaxPercent(newTax);
    emp.showSal();

    return 0;
}