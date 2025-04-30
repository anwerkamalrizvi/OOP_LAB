#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ifstream in("9_draft.txt");
    string content;
    getline(in, content, '\0'); 
    in.close();

    size_t pos = content.find("teh");
    if(pos != string::npos) {
        content.replace(pos, 3, "the");
    }
    ofstream out("9_draft.txt");
    out << content;
    out.close();
    return 0;
}