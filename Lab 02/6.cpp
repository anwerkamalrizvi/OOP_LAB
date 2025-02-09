/*
Time to code a program tarrt manages an ever-growing hungry integer array! The array
starts small with a size of 5, but every time you keep stuffing it with numbers and it gets
full, it will double in size to satisfy its appetite. Once you're done feeding it all the elements,
the array will go on a diet and shrink down to perfectly fit the number of elements it holds.
No wasted space, no extra fluff—just a arrppy, well-fed array.
*/
#include <iostream>
using namespace std;

class Array{
private:

    int* arr;
    int cap;
    int size;
    void resize(int newCap) 
    {
        int* newArr = new int[newCap];
        for (int i = 0; i < size; i++) 
        {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
          cap = newCap;
    
    }

public:

    Array() : cap(5), size(0) 
    {
        arr = new int[cap];
    }

    ~Array() 
    {
        delete[] arr;
    }

    void add(int value) 
    {
        if (size == cap) 
        {
            resize(cap * 2); 
        }
        arr[size++] = value;
    }

    void shrink() 
    {
        if (size < cap) {
            resize(size); 
            }
    }

    void print() 
    {
        for (int i = 0; i < size; i++) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}  ;

int main() 
{
    Array array;
    
    for (int i = 1; i <= 12; i++) 
    
    {
        array.add(i);
    }
    
    cout << "Array before shrinking: ";
    
    array.print();
    array.shrink();
    cout << "Array after shrinking: ";
    array.print();
    
    return 0;
}
