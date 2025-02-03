/*
Create a program that moonlights as a basic calculator, wielding the power of pointer
arithmetic to crunch numbers like a pro. It should charm the user into entering two integers,
perform addition, subtraction, multiplication, or division (depending on the user's mood),
and then proudly display the result. Use pointers to juggle values between functions and
make the magic happen.
*/

#include <iostream>
using namespace std;

int addNumber(int* number1, int* number2){
    int answer = *number1+*number2;
    return answer;
}
int subNumber(int* number1, int* number2){
    int answer = *number2 - *number1;
    return answer;
}
int mulNumber(int* n1, int* n2)
{
    int ans = (*n2)*(*n1);
    return ans;
}
float divNumber(float* n1, float *n2)

{
    float ans = *n1;
    ans = *n2/ans;
    return ans;
}
int main() 
{
    int num1;
    int num2;

    cout<<"Tell value for num1: "<<endl;
    cin>>num1;
    cout<<"Tell value for num2: "<<endl;
    cin>>num2;
    int choice;
    cout<<"Welcome to Basic Calculator"<<"Type: \n1 for adding these numbers\n2 for subtracting these numbers (num2-num1)\n3 for multiplying these numbers\n4 for dividing num2/num1\nYour choice:  "<<endl; 
   cin>>choice;
    if(choice==1)
    {
       int answer = addNumber(&num1,&num2);
       cout<<num1<<" + "<<num2<<" = "<<answer<<endl;
    }
    else if(choice == 2){
        int ans = subNumber(&num1,& num2);
        cout<<num2<<" - "<<num1<<" = "<<ans<<endl;
    }else if(choice == 3){
        int ans = mulNumber(&num1,&num2);
        cout<<num1<<" * "<<num2<<" = "<<ans<<endl;
    }else if (choice ==4)
    {
        float Num1 = num1;
        float Num2 = num2;
        float ans = divNumber(&Num1,&Num2);
        cout<<num2<<"/"<<num1<<" = "<<ans<<endl;
    }else{
        cout<<"Invalid input"<<endl;
    }
    
    return 0;
}