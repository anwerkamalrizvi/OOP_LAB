// Implement.cpp
#include "Employee.h"

void Employee::data()
{
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter monthly salary: ";
    cin >> monSal;
    cout << "Enter tax percentage: ";
    cin >> taxPercent;
}

double Employee::salAfterTax()
{
    return monSal - (monSal * (taxPercent / 100));
}

void Employee::updTaxPercent(double newTax)
{
    taxPercent = newTax;
    cout << "New tax percentage set to " << taxPercent << "%" << endl;
}

void Employee::showSal()
{
    cout << "\nEmployee: " << name << endl;
    cout << "Monthly Salary: $" << monSal << endl;
    cout << "Tax Percentage: " << taxPercent << "%" << endl;
    cout << "Salary after tax: $" << salAfterTax() << endl;
}
