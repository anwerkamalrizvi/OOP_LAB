#include <iostream>
using namespace std;

class LoanHelper{
    double amt, rate;
    int mon;
public:
    LoanHelper(double a, int m, double r) : amt(a), mon(m) 
    
    {
        rate = (r >= 0 && r <= 0.005) ? r : 0.005;
    }
    void calc(){
        double pay = (amt/mon) * (1+rate);
        cout << "Pay " << pay << " per month for  " << mon << " months to repay loan\n";
    }
};

int main() 
{
    double a, r;
    int m;
    cout << "Enter total loan amt, Months and interest rate in(Format: LOAN_AMOUNT MONTHS INTEREST_RATE): ";
    cin >> a >> m >> r;
    LoanHelper lh(a, m, r);
    lh.calc();
    return 0;
}
