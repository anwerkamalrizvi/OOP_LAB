/*
Now, considering question 5, you are tasked with separating the class definition into a header
file (Employee.h), then implementation file (Implement.cpp). Lastly, demonstrate it all by
creating at least 3 instances in a separate file containing main function (main.cpp).*/
// main.cpp
#include "Employee.h"

int main()
{
    Employee emp1, emp2, emp3;
    
    cout << "Enter details for Employee 1:" << endl;
     emp1.data();
    
    cout << "Enter details for Employee 2:" << endl;
    emp2.data();
    
    cout << "Enter details for Employee 3:" << endl;
    emp3.data();


    cout << "\nDisplaying Employee Details:" << endl;
    emp2.showSal();
    emp3.showSal();
    emp1.showSal();
    
    return 0;
}
