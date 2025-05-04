#include <iostream>
#include <fstream>
using namespace std;

void diary() {
    ofstream f("diary.txt", ios::app);
    string line;
    
    cout << "Write diary ('exit' to end):\n";
    while (true) {
        getline(cin, line);
        if (line == "exit") break;
        f << line << endl;
    }
    f.close();
}

int main() {
    diary();
    return 0;
}