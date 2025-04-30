#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
    ifstream file("8_article.txt");
    if (!file) 
    {
        cerr << "File not found!\n";
        return 1;
    }

    file.seekg(0, ios::end);
    streampos length = file.tellg();
    file.seekg(length / 2);

    string line;
    int count = 0;
    cout << "Middle 10 lines:\n";
    while (getline(file, line) && count < 10)
    {
        cout << line << endl;
        ++count;
    }
    file.close();
    return 0;
}
