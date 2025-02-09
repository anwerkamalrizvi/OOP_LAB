#include <iostream>
using namespace std;

class WaterBottle
{
private:
    string company;
    string color;
    float waterCapL;
    float waterCapML;

public:
    WaterBottle()
    {
        company = "Nestle";
        color = "white";
        waterCapL = 0.0;
        waterCapML = 0.0;
    }

    void setCompany(string cmp)
    {
        company = cmp;
    }
    void setColor(string col)
    {
        color = col;
    }
    void setWaterCap(float wcML)
    {
        waterCapML = wcML;
        waterCapL = wcML / 1000.0;
    }


    string getCompany()
    {
        return company;
    }


    string getColor()
    {
        return color;
    }

    float getWaterCapL()
    {
        return waterCapL;

    }
    float getWaterCapML()
    {

        return waterCapML;
    }

    void drinkWater(float amountML)
    {
        if (amountML > 0 && amountML <= waterCapML)
        {
            waterCapML -= amountML;
            waterCapL = waterCapML / 1000.0;
        }
        else
        {
            cout << "Invalid amount! Cannot drink more water than available." << endl;
        }
    }
};

int main()
{
    WaterBottle bottle;
    string cmp, col;
    float capacityML, drinkAmount;

    cout << "Enter company name: ";
    cin >> cmp;
    bottle.setCompany(cmp);

    cout << "Enter color: ";
    cin >> col;
    bottle.setColor(col);

    cout << "Enter water capacity in ml: ";
    cin >> capacityML;
    bottle.setWaterCap(capacityML);

    cout << "\nWater Bottle Details:" << endl;
    cout << "Company: " << bottle.getCompany() << endl;
    cout << "Color: " << bottle.getColor() << endl;
    cout << "Capacity: " << bottle.getWaterCapL() << "L (" << bottle.getWaterCapML() << "ml)" << endl;

    cout << "\nEnter amount of water (ml) to drink: ";
    cin >> drinkAmount;
    bottle.drinkWater(drinkAmount);

    cout << "\nUpdated Water Bottle Details:" << endl;
    cout << "Capacity: " << bottle.getWaterCapL() << "L (" << bottle.getWaterCapML() << "ml)" << endl;

    return 0;
}
