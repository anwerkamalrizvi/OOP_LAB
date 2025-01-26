/*
Write a function that will take a number n input by user and will return its factorial.
*/
#include <iostream>
using namespace std;

int factorial(int number){
    for (int i = number-1; i > 0; i--)
    {
        number *= i;
    }
    return number;
}
int main() 
{
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;
    int ans = factorial(n);
    cout<<"Factorial of "<<n<<": "<<ans<<endl;
    return 0;
}