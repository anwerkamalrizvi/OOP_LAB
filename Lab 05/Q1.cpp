/*Imagine you're stuck counting days instead of m—sounds confusing, right? Now, create a
class called DayOfYear that takes a simple number (representing a day of the year) and turns it
into something more useful, like "March 15" or "October 31"—basically, a proper date! For
example, if you enter 2, it should say "January 2," and if you go for 365, it should proudly declare
"December 31." The class should have a constructor that takes this number and a print() function
to display the month and day. Inside the class, store the day as an integer and use some static
string variables to help with the conversion. Finally, test your class—enter different numbers and
see how well it translates them into real dates!*/
#include <iostream>
#include <string>
using namespace std;

class DayOfYear
{

private:
    int d;
public:
    static const string m[12];
    static const int dIN[12];
    DayOfYear(int dayOfYear)
    {
        d = dayOfYear;
    }

    void print()
    {
        int indM = 0;
        int dOM = d;

        while (dOM > dIN[indM])
        {
            dOM = dOM-dIN[indM];
            indM++;
        }
        cout << m[indM] << " " << dOM << endl;
    }
};

const string DayOfYear::m[12] =
    {
        "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
        
    };

const int DayOfYear::dIN[12] =
    {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

int main()

{

    DayOfYear d1(1);
    DayOfYear d2(69);
    d2.print();
    d1.print();
    DayOfYear d3(365);
    d3.print();

    return 0;
}
