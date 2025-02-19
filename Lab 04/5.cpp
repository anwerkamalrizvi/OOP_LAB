#include <iostream>
#include <string>

using namespace std;

class FootballPlayer 
{
private:
    string playerName;
    string position;
    int goalCount;

public:
    FootballPlayer()
     {
        playerName = "Unknown Player";
        position = "Benchwarmer";
        goalCount = 0;
    }


    FootballPlayer(string name, string pos = "Midfielder", int goals = 10) 
    {
        playerName = name;
        position = pos;
        goalCount = goals;
    }
    FootballPlayer(const FootballPlayer &other) 
    {
        playerName = other.playerName;
        position = other.position;
        goalCount = other.goalCount;
    }
    void boostGoals(int goals) 
    
    {
        goalCount += goals;
    }


    void displayPlayerStats() 
    {
        cout << "Player: " << playerName << "\nPosition: " << position << "\nGoals Scored: " << goalCount << endl;
        cout << "This player is on the path to winning the Ballon d’Or!\n";
    }
};

int main( void) 

{
    FootballPlayer neymar("Neymar", "Forward", 800);
    FootballPlayer ronaldo("Cristiano Ronaldo"); 
    
    FootballPlayer mbappe = neymar; 
    neymar.boostGoals(5);

    ronaldo.boostGoals(20);
    
    neymar.displayPlayerStats();

    ronaldo.displayPlayerStats();
    mbappe.displayPlayerStats();
    
    return 0;
}
