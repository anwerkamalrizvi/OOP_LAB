#include <iostream>
#include "Car.h"
#include "Bike.h"
using namespace std;

int main() {
    Vehicle* v1 = new Car("Suzuki Mehran 2015 (BOSS)", 5500.0);
    Vehicle* v2 = new Bike("Yamaha 200", 1500.0);

    v1->displayDetails();
    cout << "Rate is " << v1->getDailyRate() << endl;

    v2->displayDetails();
    cout << "Rate is " << v2->getDailyRate() << endl;

    delete v1;
    delete v2;
    return 0;
}
