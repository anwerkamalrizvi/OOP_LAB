/*
4. Write a program to take an integer array as an input from user and count all the even and odd
numbers in that list and print the counts.
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of the array:"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter Element["<<i+1<<"]: "<<endl;
        cin>>arr[i];
    }
    int evenCounter= 0, oddCounter= 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==0){
            evenCounter++;
        }else{
            oddCounter++;
        }
    }
    cout<<"Total Even: "<<evenCounter<<endl<<"Total Odd: "<<oddCounter<<endl;
    return 0;
}