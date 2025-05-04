#include <iostream>
#include <fstream>
using namespace std;

void signup() {
    ofstream f("signup.txt", ios::app);
    string n, e;
    char c;
    
    do {
        cout << "Enter name: ";
        getline(cin, n);
        cout << "Enter email: ";
        getline(cin, e);
        f << "Name: " << n << "\nEmail: " << e << endl;
        
        cout << "Add another? (y/n): ";
        cin >> c;
        cin.ignore();
    } while (c == 'y');
    f.close();
}

int main() {
    signup();
    return 0;
}