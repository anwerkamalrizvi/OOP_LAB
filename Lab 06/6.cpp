#include <iostream>
#include <string>
using namespace std;

class Device {
protected:
    string br, mod;

public:
    Device(string b, string m) : br(b), mod(m) {}
    
    void display()
    {
        cout << "Brand: " << br << "\nModel: " << mod << endl;
    }
};

class Smartphone : virtual public Device{
protected:
    int sS;

public:
    Smartphone(string b, string m, int sims) : Device(b, m), sS(sims) {}
    
    void display()
    {
        Device::display();
        cout<<"Slots of sim: "<<sS<<endl;
    }
};

class Tablet : virtual public Device{
protected:
    bool stySupp;

public:
    Tablet(string b, string m, bool stylus) : Device(b, m), stySupp(stylus) {}
    
    void display()
    {
        Device::display();
        cout<< "Stylus Support: "<<(stySupp?"Yes":"No")<<endl;
    }
};

class HybridDevice : public Smartphone, public Tablet{
public:
    HybridDevice(string b, string m, int sims, bool stylus) 
        : Device(b, m), Smartphone(b, m, sims), Tablet(b, m, stylus) {}
    
    void display()
    {
        cout << "\nHybrid Device:" << endl;
        Device::display();
        cout << "SIM Slots: " << sS << "\nStylus Support: " << (stySupp ? "Yes" : "No") << endl;
    }
};

int main()
{
    HybridDevice hybrid("MangoTech", "iPeel Pro Max", 2, true);
    HybridDevice hybrid1("Changan", "C++ Camera Coda", 1, false);
    hybrid.display();
    hybrid1.display();
    return 0;
}