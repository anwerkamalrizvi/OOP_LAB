#include <iostream>
#include <string>
using namespace std;

class Vehicle{
protected:
    string make, mod;
    int y;

public:
    Vehicle(string mk, string mdl, int yr) : make(mk), mod(mdl), y(yr) {}
    
    void display()
    {
        cout<<"Make of the vehicle: " << make << "\nModel of the vehicle: " << mod << "\nYear of registation: " << y << endl;
    }

};

class Car : public Vehicle {
protected:
    int d;  //doors
    double fEf; //fuel effie

public:
    //initialized by member initializations
    Car(string mk, string mdl, int yr, int drs, double fe) : Vehicle(mk, mdl, yr), d(drs), fEf(fe) {}
    
    void display() 
    {
        Vehicle::display();

            cout<<"Vehicle Doors: "<<d<<"\nFuel Capacity: "<<fEf<< " KM/L" << endl;
    }
};

class ElectricCar :public Car{
private:
    double btL;

public:
    ElectricCar(string mk, string mdl, int yr, int drs, double fe, double bl) 
        : Car(mk, mdl, yr, drs, fe), btL(bl) {}
    
    void display() 
    {
        Car::display();
        cout<<"Survival of battery is: "<<btL<<" kilometers" << endl;
    }
};

int main() {
    ElectricCar tesla("Tesla", "MUSK's SPECIAL ULTRA 2.0 EDITION", 2025, 4, 10.0, 6300);
    tesla.display();
    return 0;
}
