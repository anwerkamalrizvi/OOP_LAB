#include <iostream>
#include <cmath>
using namespace std;
class Shape
{
public:
    int x, y;
    string color;
    double borThk; //thickness for border
    Shape(int x, int y, string color, double borThk = 0.0) : x(x), y(y), color(color), borThk(borThk) {}
    virtual void draw() = 0;
    virtual double calculate_a() = 0;
    virtual double calculate_p() = 0;
};
class Circle : public Shape
{
public:
    double rad;
    Circle(int x, int y, string color, double rad, double borThk = 0.0) : Shape(x, y, color, borThk), rad(rad) {}
    void draw() override
    {
        cout << "drawing circle at (" << x << "," << y << ") of radius " << rad << endl;
    }
    double calculate_a() override
    {
        return 3.142 * rad * rad;
    }
    double calculate_p() override
    {
        return 2 * 3.142 * rad;
    }
};
class Rectangle : public Shape
{
public:
    double w, h;
    Rectangle(int x, int y, string color, double w, double h, double borThk = 0.0) : Shape(x, y, color, borThk), w(w), h(h) {}
    void draw() override
    {
        cout << "DRawing rectangle at (" << x << "," << x << ") with w " << w << " and h " << h << endl;
    }
    double calculate_a() override
    {
        return w * h;
    }
    double calculate_p() override
    {
        return 2 * (w + h);
    }
};
class Triangle : public Shape
{
public:
    double b, h, s1, s2, s3;
    Triangle(int x, int y, string color, double b, double h, double s1, double s2, double s3, double borThk = 0.0) : Shape(x, y, color, borThk), b(b), h(h), s1(s1), s2(s2), s3(s3) {}
    void draw() override
    {
        cout << "Drawing Triangle at (" << x << ", " << y << ") with b " << b << " and height " << h << "\n";
    }
    double calculate_a() override
    {
        return 0.5 * h * b;
    }
    double calculate_p() override
    {
        return s1 + s2 + s3;
    }
};

int main()
{
    Circle c(13, 13, "Red", 3);
    Rectangle r(24, 24, "Blue", 13, 15);
    Triangle t(3, 3, "White", 6, 8, 5, 6, 7);


    c.draw();
    cout << "Area of circle: "<< c.calculate_a() <<"\nPerimeter of circel: "<< c.calculate_p() << endl;
    r.draw();
    cout << "Area of rectangle: "<< r.calculate_a() <<"\nPerimeter of rectangle: "<< r.calculate_p() << endl;
    t.draw();
    cout << "Area of triangle: " << t.calculate_a()<< "\nPerimeter of triangle: "<< t.calculate_p() << endl;
    return 0;
}