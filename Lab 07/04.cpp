#include <iostream>
using namespace std;

class Person 
{
public:
    string name, id, address, phone, email;
    Person(string n, string i, string a, string p, string e) : name(n), id(i), address(a), phone(p), email(e) {}
    
    virtual void display_data() 
    {
        cout << "Name: " << name << endl
             << "ID: " << id << endl
             << "Address: " << address << endl
             << "Phone: " << phone << endl
             << "Email: " << email << endl;
    }

    void update_data(string new_addr, string new_phone, string new_email) 
    {
        address = new_addr;
        phone = new_phone;
        email = new_email;
    }
};

class Student : public Person 
{
public:
    string course_list[10];
    int enrolled = 0;
    double gpa = 0.0;
    int year;

    Student(string n, string i, string a, string p, string e, int y) : Person(n, i, a, p, e), year(y) {}

    void enroll(string course) 
    {
        if (enrolled < 10) 
            course_list[enrolled++] = course;
        else 
            cout << "Enrollment limit reached!" << endl;
    }

    void update_GPA(double new_gpa) 
    {
        gpa = new_gpa;
    }

    void display_data() override 
    {
        Person::display_data();
        cout << "Batch Year: " << year << endl
             << "GPA: " << gpa << endl
             << "Courses:" << endl;
        for (int i = 0; i < enrolled; i++) 
            cout << course_list[i] << endl;
    }
};

class Professor : public Person 
{
public:
    string department;
    string subjects[10];
    int taught = 0;
    double pay;

    Professor(string n, string i, string a, string p, string e, string dept, double salary) : Person(n, i, a, p, e), department(dept), pay(salary) {}

    void add_courses(string subject) 
    {
        if (taught < 10) 
            subjects[taught++] = subject;
        else 
            cout << "Subject limit exceeded!" << endl;
    }

    void display_data() override 
    {
        Person::display_data();
        cout << "Department: " << department << endl
             << "Salary: " << pay << endl
             << "Subjects:" << endl;
        for (int i = 0; i < taught; i++) 
            cout << subjects[i] << endl;
    }
};

class Staff : public Person 
{
public:
    string division, title;
    double income;

    Staff(string n, string i, string a, string p, string e, string div, string t, double sal) : Person(n, i, a, p, e), division(div), title(t), income(sal) {}

    void display_data() override 
    {
        Person::display_data();
        cout << "Division: " << division << endl
             << "Title: " << title << endl
             << "Income: " << income << endl;
    }
};

class Course 
{
public:
    string course_id, course_name, time_slot;
    int credit_hours;
    Professor* instructor;
    Student* enrolled_students[50];
    int count = 0;

    Course(string id, string name, int cr, string time, Professor* prof) : course_id(id), course_name(name), credit_hours(cr), time_slot(time), instructor(prof) {}

    void registerStudent(Student* s) 
    {
        if (count < 50) 
        {
            enrolled_students[count++] = s;
            s->enroll(course_name);
        } 
        else 
            cout << "Maximum students reached!" << endl;
    }

    void display_course() 
    {
        cout << "Course ID: " << course_id << endl
             << "Name: " << course_name << endl
             << "Credits: " << credit_hours << endl
             << "Time: " << time_slot << endl
             << "Instructor: " << instructor->name << endl
             << "Students Enrolled:" << endl;
        for (int i = 0; i < count; i++) 
            cout << enrolled_students[i]->name << endl;
    }
};

int main() {
    Professor p1("Advocate Sameer Faisal", "CS1002", "Block A Campus", "03111222333", "sameerfaisal46@gmail.com", "Programming Fundamentals", 219110);
    p1.add_courses("CS1004");

    Student st1("Umar Aen", "CS1002", "Lalo Khet", "03334432666", "k240022@nu.edu.pk", 2024);
    Student st2("Dimaag Pakao Masoom", "CS1004", "Sahara Desert", "03447778899", "k240001@nu.edu.pk", 2024);

    Course course1("CS2012", "Algorithms", 3, "Tue 2PM-4PM", &p1);
    course1.registerStudent(&st1);
    course1.registerStudent(&st2);

    cout << "\n--- Professor Info ---\n";
    p1.display_data();

    cout << "\n--- Student Info ---\n";
    st1.display_data();
    st2.display_data();

    cout << "\n--- Course Info ---\n";
    course1.display_course();

    return 0;
}
