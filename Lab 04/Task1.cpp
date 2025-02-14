/*Design a Book class for a library system that’s in desperate need of organization, with
attributes title, author, and price—because even imaginary books need royalties.
Implement a default constructor that sets the blandest values possible (think "Untitled,"
"Anonymous," and free), a parameterized constructor for when you want your book to
have an actual identity, a copy constructor for duplicating your masterpiece, and a
constructor with default arguments where you only need to provide the title, while
author defaults to "Unknown" and price to 0.0 (clearly a bestseller). Test your creation
by spawning book objects every way imaginable and proudly showing off their details
like they’re competing in a talent show.*/
#include <iostream>
using namespace std;

class libBook{
	string title;
	string author;
	float price;
	public:
		libBook(){
			title = "Untitled";
			author = "Anonymous";
			price = 0.0;
		}
		libBook(string author, string title, float price){
			this->author = author;
			this->title = title;
			this->price = price;
		}
		libBook(libBook &obj){
			title = obj.title;
			author = obj.author;
			price = obj.price;
		}
		void display(){
			cout<<title<<endl<<author<<endl<<price<<endl;
		}
	
};

int main(void){
	libBook b1;
	libBook b2("ALien","Mamatus",6900.33);
	libBook b3("BULLBULL GOT A SHOT WHAT!!", "Baby Jonas",4444.332);
	b2.display();
	b3.display();
}
