#include <iostream>

using namespace std;

class Circle

{

private:

    double radius;
    const double pi = 3.14159;

public:

    Circle()
    {
        radius = 0.0;
    }

    void setRadius(double r)
    {
        if (r >= 0)
            radius = r;
    }

    double getRadius() const

    {
        return radius;
    }

    double getArea() const

    {
        return pi * radius * radius;
    }

    double getDiameter() const


    {
        return radius * 2;
    }
    double getCircumference() const
    {
        return 2* pi * radius;
    }
};

int main()
{
    Circle c;
     double userRad;
    
    cout << "Enter the radius of the circle: ";
    cin >> userRad;
    
    c.setRadius(userRad);
    
    cout << "Circle Properties: "<<endl;
    cout << "Radius: " << c.getRadius() << endl;
    cout << "Area: " << c.getArea() << endl;
    cout << "Diameter: " << c.getDiameter() << endl;
    
    cout << "Circumference: " << c.getCircumference() << endl;
    
    return 0;
}
