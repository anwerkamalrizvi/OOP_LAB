#include <iostream>
#include <stdexcept>
using namespace std;

class InvalidAgeException : public runtime_error {
public:
    InvalidAgeException() : runtime_error("ERROR!! Age must be btw 1 - 119 (Are you 119?)") {}
};

class InvalidSalaryException : public runtime_error {
public:
    InvalidSalaryException() : runtime_error("Salary must be +ve") {}
};

class InvalidHeightException : public runtime_error {
public:
    InvalidHeightException() : runtime_error("Height must be +ve") {}
};

int main() 
{
    try {
        int age;
        cout << "Enter age: ";
        cin >> age;
        if (age <= 0 || age >= 120) {
            throw InvalidAgeException();
        }
        
        double salary;
        cout << "Enter salary: ";
        cin >> salary;
        if (salary <= 0) {
            throw InvalidSalaryException();
        }
        
        double height;
        cout << "Enter height: ";
        cin >> height;
        if (height <= 0) {
            throw InvalidHeightException();
        }
        
        cout << "All inputs are valid!" << endl;
        
    } catch (const InvalidAgeException &e) {
        cout << "InvalidAgeException caught: " << e.what() << endl;
    } catch (const InvalidSalaryException &e) {
        cout << "InvalidSalaryException caught: " << e.what() << endl;
    } catch (const InvalidHeightException &e) {
        cout << "InvalidHeightException caught: " << e.what() << endl;
    }
    
    return 0;
}