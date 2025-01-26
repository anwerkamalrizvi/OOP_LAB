/*
Write a C++ program to check whether a given number is prime or not. Allow the user to input a
number and display whether it&#39;s prime or not?
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    int flag;
    cout<<"Enter number to recognize whether it is prime or not: "<<endl; //n>1
    cin>>n;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            flag = 1;
            break;
        }
    }
    if(flag!=1){
        cout<<"Prime"<<endl;

    }
    else{
        cout<<"Not a Prime"<<endl;
    }
    
}