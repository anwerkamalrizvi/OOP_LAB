#include <iostream>
#include <fstream>
using namespace std;

struct Student 
{
    char name[50];
    int id;
    float gpa;
};

int main() 
{
    ofstream outFile("7_students.dat", ios::binary);
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s;
    for (int i = 0; i < n; ++i) 
    {
        cout << "Enter std's name: ";
        cin.ignore();
        cin.getline(s.name, 50);
        cout << "\nEnter std's ID: ";
        cin >> s.id;
        cout<<"Enter GPA of std: ";
        cin >> s.gpa;
        outFile.write(reinterpret_cast<char*>(&s), sizeof(s));
    }
    outFile.close();

    ifstream inFile("7_students.dat", ios::binary);
    cout << "\nStored Students:\n";
    while (inFile.read(reinterpret_cast<char*>(&s), sizeof(s))) 
    {
        cout << "Name: " << s.name << "\nID: " << s.id << "\nGPA: " << s.gpa << endl;
        cout <<"\n";
    }
    inFile.close();
    return 0;
}
