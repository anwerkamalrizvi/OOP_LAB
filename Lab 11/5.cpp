#include <iostream>
#include <string>
using namespace std;

template <typename T>
T findMax(const T arr[], int size) {
    T max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() 
{
    int intArr[] = {10, 20, 5, 30, 25};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    cout << "Array is: [";
    for (int i = 0; i < intSize; i++) {
        cout << intArr[i];
        if (i < intSize - 1) cout << ", ";
    }
    cout << "]" << endl;
    cout << "Max: " << findMax(intArr, intSize) << endl << endl;

    string strArr[] = {"Apple", "Mango", "Banana", "Peach"};
    int strSize = sizeof(strArr) / sizeof(strArr[0]);
    cout << "Array: [";
    for (int i = 0; i < strSize; i++) {
        cout << "\"" << strArr[i] << "\"";
        if (i < strSize - 1) cout << ", ";
    }
    cout << "]" << endl;
    cout << "Max: " << findMax(strArr, strSize) << endl;

    return 0;
}