#ifndef VEH_H
#define VEH_H

#include <string>
using namespace std;
class Vehicle {
protected:
    string model;
    double rate;
public:
    Vehicle(string m, double r) : model(m), rate(r) {}
    virtual double getDailyRate() const = 0;
    virtual void displayDetails() const = 0; 
    virtual ~Vehicle() {}
};

#endif
