/*
Imagine you are tasked with creating a program to manage a library's book inventory. Each
book has attributes such as title, author, publication year, and genre. Design a struct that
effectively represents a book as a real-world entity. Then, write a C++ program that utilizes
this struct to demonstrate the creation, modification, and display of book information.
a) Extend the program to manage multiple books in an array.
b) Implement a function to search for a book by title or author.
c) Allow the user to input new books and update existing book information
interactively.
*/
#include <iostream>
using namespace std;
typedef struct libraryBookInventory{
    string title;
    string author;
    int yearOfPublication;
    int genre;
    int code;
}lBI;

void addBook(lBI inv[],int totalBooks){
    int i = totalBooks - 1;
    cout<<"Enter title of the book"<<endl;
    cin>>inv[i].title;
    cout<<"Enter author of the book"<<endl;
    cin>>inv[i].author;
    cout<<"Enter publication year of the book"<<endl;
    cin>>inv[i].yearOfPublication;
    cout<<"Enter genre of the book"<<endl;
    cin>>inv[i].genre;
    inv[i].code = totalBooks;
    cout<<"Book's code is registered as "<<inv[i].code<<" !"<<endl;
    return;
}
void updateBook(lBI inv[], int totalBooks, int search){
    int chooseBro;
    for (int i = 0; i < totalBooks; i++)
    {
        if (search == i+1)
        {
            cout<<"What do you want to update of this book?"<<endl<<"1. Title of the book\n2. Author of the book\n3. Publication Year of the book\n4. Genre of the book\nSelect(1-4): "<<endl;
            cin>>chooseBro;
            switch(chooseBro)
            {
                case 1:
                cout<<"Enter new title of the book"<<endl;
                cin>>inv[i].title;
                cout<<"Updated sucessfully"<<endl;

                break;

                case 2:
                cout<<"Enter new author of the book"<<endl;
                cin>>inv[i].author;
                cout<<"Updated sucessfully"<<endl;

                break;

                case 3:
                cout<<"Enter new publication  year of the book"<<endl;
                cin>>inv[i].yearOfPublication;
                cout<<"Updated sucessfully"<<endl;

                break;
             
                case 4:
                cout<<"Enter new author of the book"<<endl;
                cin>>inv[i].genre;
                cout<<"Updated sucessfully"<<endl;

                break;

                default:
                cout<<"Wrong choice. "<<endl;

            }
        }   
        
    }
    
}
void displayBook(lBI inv[], int totalBooks, int search)
{

    for (int i = 0; i < totalBooks; i++)
    {
        if(search == i+1)
        {
            cout<<"Book code: "<<search<<endl<<"Title of the book:"<<inv[i].title<<endl<<"Author of the book:"<<inv[i].author<<endl<<"Publication year of the book:"<<inv[i].yearOfPublication<<endl<<"Genre of the book:"<<inv[i].genre<<endl;
            return;
        }
    }
    
}
int main() 
{
    lBI inv[10];        //10 size is set by me u can change it for more books
    int choice, counter=0;
    int search;
    do{
        cout<<"Welcome To Library Book Inventory Management System\n"<<"1. Add new Book"<<endl<<"2. Modify existing book"<<endl<<"3. Details of Book\n4. Quit"<<endl<<"Your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
            counter+=1;
            addBook(inv,counter);
            break;

            case 2:
            cout<<"Enter Book Code to search: "<<endl;
            cin>>search;
            updateBook(inv,counter,search);
            break;

            case 3:
            cout<<"Enter Book Code to search: "<<endl;
            cin>>search;
            displayBook(inv, counter,  search);
            break;

            case 4:
            return 0;

            default:
            cout<<"Invalid choice"<<endl;
 
        }
    }   while(choice!=4); 
    return 0;
}