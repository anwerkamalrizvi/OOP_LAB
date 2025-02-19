#include <iostream>
#include <string>
using namespace std;

class CricketPlayer 
{
private:
    string name;
    int jerseyNumber;
    double battingAverage;

public:
    CricketPlayer(string name, int jerseyNumber, double battingAverage) 
    {
        this->name = name;
        this->jerseyNumber = jerseyNumber;
        this->battingAverage = battingAverage;
    }
    CricketPlayer& improveAverage(double runs) 
    {
        battingAverage += runs / 10; 
        return *this;
    }

    CricketPlayer& playMatch(int runsScored) {
        battingAverage = ((battingAverage * 10) + runsScored) / 11; 
        return *this;
    }
    void displayPlayerStats() 
    {
        cout << "Player: " << name << "\nJersey Number: " << jerseyNumber << "\nBatting Average: " << battingAverage << endl;
        cout << "This batting average is more consistent than Karachi’s weather!\n";
    }
};

int main() 
{
    CricketPlayer babar("Babar Azam", 56, 45.5);
    CricketPlayer rizwan("Muhammad Rizwan", 16, 42.8);

CricketPlayer saim("Saim Ayub", 23, 38.2);


    babar.playMatch(100).improveAverage(10).displayPlayerStats();
    rizwan.playMatch(75).improveAverage(5).displayPlayerStats();
    saim.playMatch(30).improveAverage(2).displayPlayerStats();
    
    return 0;
}
