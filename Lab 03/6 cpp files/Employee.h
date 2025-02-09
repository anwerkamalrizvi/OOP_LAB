// Employee.h
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee
{
private:

    string name;
    double monSal;
    double taxPercent;

public:

    void data();
    double salAfterTax();
    void updTaxPercent(double newTax);
    void showSal();
};

#endif
