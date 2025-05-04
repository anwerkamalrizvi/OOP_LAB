#include <iostream>
#include <fstream>
using namespace std;

void gcard() {
    string n, msg;
    cout << "Enter name: ";
    getline(cin, n);
    cout << "Enter message: ";
    getline(cin, msg);

    ofstream f("greeting.txt");
    f << "Dear " << n << " ,\n" << msg << "\nRegards!";  //Dear "bhaisahab", .... Regards!
    f.close();
}

int main() {
    gcard();
    return 0;
}