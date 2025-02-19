#include <iostream>
#include <string>

using namespace std;

class SmartDevice 
{
private:
    string name;
    string type;
    bool status; 

public:

    SmartDevice(string devName, string devType, bool devStat)
        : name(devName), type(devType), status(devStat) 
        {
        cout << "[BOOT] " << name << " (" << type << ") has powered up!\n";
    }
    ~SmartDevice() 
    
    {
        cout << "[SHUTDOWN] " << name << " (" << type << ") is powering down for the last time... Farewell!\n";
    }
    void toggle() 
    {
        status = !status;
        cout << name << " isd now " << (status ? "ON" : "OFF") << "!\n";
    }
};

int main() 
{

    SmartDevice *light = new SmartDevice("Living Room Light", "Smart Light", true);
     SmartDevice *vacuum = new SmartDevice("RoboVac", "Robo-Vacuum", false);
    light->toggle();

      vacuum->toggle();

    delete light;
    delete vacuum;
    
    return 0;
}
