#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("10_backuplog.txt", ios::app);
    
    string msg;
    cout << "\nEnter message: ('exit' to quit) ";
    getline(cin, msg);

    while(msg != "exit") {
        file << msg << endl;
        cout << "File size is now in bytes: " << file.tellp() << endl;
        
        cout << "Enter next message: ";
        getline(cin, msg);
    }
    file.close();
    return 0;
}