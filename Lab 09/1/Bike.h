#ifndef BIKE_H
#define BIKE_H

#include "Veh.h"
#include <iostream>

class Bike : public Vehicle {
public:
    Bike(string m, double r) : Vehicle(m, r) {}
    double getDailyRate() const override {
        return rate;
    }
    void displayDetails() const override {
        cout << "\nBike Details:\n";
        cout << "Model is " << model << "\n";
        cout << "Daily Rate is " << rate << endl;
    }
};

#endif
