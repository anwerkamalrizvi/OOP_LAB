/*
Imagine you're creating the next big smartphone, but there's a twist—every phone must come
with a loyal, built-in battery that can never leave, like a clingy best friend. No swapping, no running
away, just a phone and its forever-attached power buddy. Every battery has a specific capacity
(mAh), and each smartphone must be born with its battery already locked in, like destiny. Your
mission? Build a system where every smartphone starts life with a battery, a function lets you
proudly show off both the phone and its battery details, and—most importantly—the battery can
never sneak off on its own. Now, grab your coding cape and design the Smartphone and Battery
classes, making sure their bond is unbreakable, like a phone addict and their charger!*/

#include <iostream>
#include <string>
using namespace std;

class Battery 
{
private:
    int cap;

public:
    Battery(int cap) : cap(cap) {}

    int getCap() 
    const{
        return cap;
    }
};

class Sph 
{
private:
    string naam;
    Battery& B;

public:
    Sph(string naam, Battery& Bobj) : naam(naam), B(Bobj) {}

    void show() 
    const{
        cout << "Smartphone--> " << naam << endl<< "Battery Capacity-->  " << B.getCap() << " MAH\n";
    }
};

int main() 
{
    Battery myB(50000);
    Sph myPh("ULTRA INFINITE PREMIUM DIAMOND-PLATED Nokia 3310", myB);
    myPh.show();

    return 0;
}
