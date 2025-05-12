#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class OutOfBoundsException : public runtime_error {
public:
    OutOfBoundsException() : runtime_error("Invalid index! what are you doing?? ") {}
};

template <typename T>
class SmartArray {
private:
    T *arr;
    int size;
public:
    SmartArray(int s) : size(s) {
        arr = new T[size];
    }
    
    ~SmartArray() {
        delete[] arr;
    }
    
    T& operator[](int index) {
        if (index < 0 || index >= size) {
            throw OutOfBoundsException();
        }
        return arr[index];
    }
    
    int getSize() const { return size; }
};

int main() 
{
    try {
        int size;
        cout << "Array size is: ";
        cin >> size;
        
        SmartArray<int> intArray(size);
        cout << "Enter elements for the aarray: ";
        for (int i = 0; i < size; i++) {
            cin >> intArray[i];
        }
        
        int index;
        cout << "Accessing index? : ";
        cin >> index;
        cout << "Value enter: " << intArray[index] << endl;
        
    } catch (const OutOfBoundsException &e) {
        cout << "OutOfBoundsException caught: " << e.what() << endl;
    }
    
    return 0;
}