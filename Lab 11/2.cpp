#include <iostream>
#include <stdexcept>
using namespace std;

int main() 
{
    int numerator, denominator;
    
    cout << "Enter numer: ";
    cin >> numerator;
    cout << "Enter deno: ";
    cin >> denominator;
    
    try {
        if (denominator == 0) {
            throw runtime_error("Division by zero?? infinity lol");
        }
        cout << "Result: " << numerator / denominator << endl;
    } catch (const runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }
    
    return 0;
}