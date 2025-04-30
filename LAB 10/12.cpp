#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f("8_article.txt");
    int o; 
    cout << "Offset: "; 
    cin >> o;

    cout << "Pos: " << f.tellg() << endl;
    f.seekg(o);
    cout << "New pos: " << f.tellg() << endl;

    char b[101];
    f.read(b,100);
    b[f.gcount()]='\0';
    cout << b << endl;
    f.close();
    return 0;
}