#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main() {
    ifstream in("8_article.txt");
    char ch; int cc=0,wc=0,lc=0,pc=0; bool w=0;

    while(in.get(ch)) {
        cc++;
        if(ch=='\n') lc++;
        if(ispunct(ch)) pc++;
        if(isalpha(ch)) { if(!w) wc++; w=1; }
        else w=0;
    }
    in.close();

    ofstream out("11_report.txt");
    out << "Chars: " << cc << "\nWords: " << wc 
        << "\nLines: " << lc << "\nPuncts: " << pc;
    out.close();
    return 0;
}