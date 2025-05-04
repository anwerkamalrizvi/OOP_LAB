#include <iostream>
#include <fstream>
using namespace std;

void scan() {
    ifstream f("secret.txt");
    char c;
    int cnt = 0;
    
    while (f.get(c)) {
        if (c >= 'A' && c <= 'Z') cnt++;
    }
    f.close();
    cout << "UPPERCASE counter: " << cnt << endl;
}

int main() {
    scan();
    return 0;
}