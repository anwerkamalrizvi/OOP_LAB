#include <iostream>
#include <string>
using namespace std;

class Person{
protected:
    string naam;
    int age;

public:
    Person(string n, int a):naam(n), age(a) {}
    
    void display() 
    {
        cout<<"Name of std: "<<naam<<"\nAge of std: "<<age<<endl;
    }
};

class Student:public Person {
protected:

    int stdID;    int grlvl;
public:
    Student(string n, int a, int id, int grade) : Person(n, a), stdID(id), grlvl(grade) {}
    
    void display() 
    {
        Person::display();
        cout<<"ID of stud: " << stdID << "\nGrade lvl: " <<grlvl<<endl;
    }
};

class Teacher : public Person{
protected:
    string sub;
    int rmNo;

public:
    Teacher(string n, int a, string subject, int room) : Person(n, a), sub(subject), rmNo(room) {}
    
    void display(void) 
    {
        Person::display();
        cout << "Subject: " << sub << "\nRoom Number: " << rmNo << endl;
    }

};

class GraduateStudent:public Student, public Teacher{
public:

    GraduateStudent(string n, int a, int id, int grade, string subject, int room)
        : Student(n, a, id, grade), Teacher(n, a, subject, room) {}
    
    void display() 
    {
        cout<<"Graduate Student"<<endl;
        Student::display();
        cout<<"Info of teaching: "<<"\nSubject of teaching: "<<sub<<"\nRoom Number: "<<rmNo<<endl;
    }
};

int main() 
{

    GraduateStudent grad("Kashan Mehmood Bajway", 19, 242539, 15, "Computer Science", 804);
    grad.display();
    return 0;
}
