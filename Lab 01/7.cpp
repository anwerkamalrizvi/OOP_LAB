/*
You are hired as a billing manager at K-Electric. Your task is to calculate the monthly bill
according to the units consumed. Write a program to input electricity unit charge and calculate the
total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.'
*/
#include <iostream>
using namespace std;

int main() 
{
    int noOfUnits;
    cout<<"Enter number of units consumed: "<<endl;
    cin>>noOfUnits;
    float calculate = 0;
    for (int i = 1; i <= noOfUnits; i++)
    {
        if(i<=50){
            calculate += 0.5;
        }else if(i>50&&i<=150){
            calculate += 0.75;
        }else if(i>150&&i<=250){
            calculate += 1.2;
        }else if(i>250){
            calculate += 1.5;
        }

    }
    calculate *= 1.2;
    cout<<"Total Bill: (after subcharge of 20%): "<<calculate<<endl;
    
    return 0;
}