#ifndef CAR_H
#define CAR_H

#include "Veh.h"
#include <iostream>

class Car : public Vehicle {
public:
    Car(string m, double r) : Vehicle(m, r) {}
    double getDailyRate() const override {
        return rate;
    }
    void displayDetails() const override {
        cout << "Car Details: \n";
        cout << "Model: " << model << "\nDaily Rate is " << rate << endl;
    }
};

#endif
