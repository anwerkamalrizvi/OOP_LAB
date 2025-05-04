#include <iostream>
using namespace std;

class Complex{
private:
    float real, imag;
public:
    Complex(float r, float i) : real(r), imag(i) {}
    
    Complex operator+(Complex c) 
    {
        return Complex(real + c.real, imag + c.imag);
    }
    
    Complex operator-(Complex c) 
    {
        return Complex(real - c.real, imag - c.imag);
    }
    
    Complex operator*(Complex c) 
    {
        return Complex(real*c.real - imag*c.imag, real*c.imag + imag*c.real);
    }
    
    bool operator==(Complex c) {
        return (real == c.real) && (imag == c.imag);
    }
    
    void print(void) 
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() 
{
    Complex c1(3,4), c2(1,2);
    (c1 + c2).print();
    (c1 - c2).print();
    (c1 * c2).print();
    cout << (c1 == c2) << endl;
    return 0;
}