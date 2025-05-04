#include <iostream>
using namespace std;

class BallsFaced;

class Runs{
private:
    int runs;
public:
    Runs(int r) : runs(r) {}
    friend float calcSR(Runs, BallsFaced);
};

class BallsFaced{
private:
    int balls;
public:
    BallsFaced(int b) : balls(b) {}
    friend float calcSR(Runs, BallsFaced);
};

float calcSR(Runs r, BallsFaced b) 
{
    return (r.runs / (float)b.balls) * 100;
}

int main() 
{
    Runs r(85);
    BallsFaced b(60);
    cout << "Strike Rate hai: " << calcSR(r, b) << endl;
    return 0;
}