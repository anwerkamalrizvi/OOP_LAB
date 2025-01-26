/*
Create a C++ program to handle student marks management. The program should allow users to
input marks for students in four courses: PF, OOP, DLD & ICT. It should then calculate the total
marks, average marks, and determine the grade for each student based on their average.
Use the following grading metrics:
90 or above: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
Below 60: Grade F
*/

#include <iostream>
using namespace std;
typedef struct stud{
    int PFmarks, OOPmarks, DLDmarks, ICTmarks;
}Std;
int main()
{
    Std student[10]; //Max limit set to 10
    int noOfStd;
    int total[10] = {0};
    float avg[10]={0};
    char grade = ' ';
    cout<<"Welcome To Student Marks Management System"<<endl;
    cout<<"Write no of students: "<<endl;
    cin>>noOfStd; 
    for (int i = 0; i < noOfStd; i++)
    {
        cout<<"Student "<<i+1<<": "<<endl;
        cout<<"Enter marks in PF out of 100: "<<endl;  cin>>student[i].PFmarks;
        cout<<"Enter marks in OOP out of 100: "<<endl;
        cin>>student[i].OOPmarks;
        cout<<"Enter marks in DLD out of 100: "<<endl;
        cin>>student[i].DLDmarks;
        cout<<"Enter marks in ICT out of 100: "<<endl;
        cin>>student[i].ICTmarks;
        total[i]+= student[i].PFmarks+student[i].OOPmarks+student[i].ICTmarks+student[i].DLDmarks;
        avg[i] = (float)total[i]/4;
    }
    for (int i = 0; i < noOfStd; i++)
    {
        cout<<"Data for Student "<<i+1<<" :"<<endl;
        cout<<"Total marks: "<<total[i]<<endl<<"Total Average: "<<avg[i]<<endl;
        if(avg[i]>=90) grade = 'A';
        if(avg[i]>=80&&avg[i]<90) grade = 'B';
        if(avg[i]>=70&&avg[i]<80) grade = 'C';
        if(avg[i]>=60&&avg[i]<70) grade = 'D';
        if(avg[i]<60) grade = 'F';
        cout<<"Grade: "<<grade<<endl;
    }
    
    
}