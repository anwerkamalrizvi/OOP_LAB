#include <iostream>
using namespace std;

class Time;

class Speed{
private:
    float kmph;
public:
    Speed(float s) : kmph(s) {}
    friend float calcDist(Speed, Time);
};

class Time{
private:
    float hrs;
public:
    Time(float t) : hrs(t) {}
    friend float calcDist(Speed, Time);
};

float calcDist(Speed s, Time t) 

{
    return s.kmph * t.hrs;
}

int main() 
{
    Speed s(60);
    Time t(2);
    cout << "Distance in kms is: " << calcDist(s, t) << endl;
    return 0;
}