#include <iostream>
using namespace std;

class Student{
private:
    string name;
    float g1, g2, g3;
public:
    Student(string n, float a, float b, float c) : name(n), g1(a), g2(b), g3(c) {}
    
    friend class Teacher;
    friend float calcAvg(Student);
};

class Teacher{
public:
    static void updateGrade(Student &s, int which, float val) 
    
    {
        if (which == 1) s.g1 = val;
        else if (which == 2) s.g2 = val;
        else s.g3 = val;
    }
};

float calcAvg(Student s) 
{
    return (s.g1 + s.g2 + s.g3) / 3;
}

int main() 
{
    Student s("BAqar", 85, 69, 90);
    cout << "Avg then is: " << calcAvg(s) << endl;
    Teacher::updateGrade(s, 2, 85);
    cout << "avg NOW is: " << calcAvg(s) << endl;
    return 0;
}