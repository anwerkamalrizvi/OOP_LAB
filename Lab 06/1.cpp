#include <iostream>
#include <string>
using namespace std;

class Book{
protected:
    string tit, aut, pub;

public:
    Book(string t, string a, string p) : tit(t), aut(a), pub(p) {}
    
    void display() 
    
    {
        cout<<"Title of book: "<<tit<<"\nAuthor of book: "<<aut<< "\nPublisher of bool: " <<pub<<endl;
    }
};

class FictionBook : public Book
{
private:
    string gen, pro;


public:
    FictionBook(string t, string a, string p, string g, string pr) : Book(t, a, p), gen(g), pro(pr) {}
    
    void display() 
    {
        Book::display();
        cout<<"Genre: "<<gen<<"\nProtagonist: "<<pro<<endl;
    }

};

int main() 
{
    FictionBook book("Magnetic Field and Gravity", "Albert Einstein", "Iqra Publishers LTD", "Physics Study", "Muhammad Rafi"); 
    book.display();
    
    return 0;
}
