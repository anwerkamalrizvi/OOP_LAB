#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

void split() {
    ifstream f("st.txt");
    string line, word;
    
    while (getline(f, line)) {
        istringstream iss(line);
        while (iss >> word) {
            cout << word << endl;
        }
    }
    f.close();
}

int main() {
    split();
    return 0;
}