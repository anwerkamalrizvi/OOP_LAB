#include <iostream>
#include <string>
using namespace std;

class Character {
protected:
    int hlh, dmg;

public:
    
Character(int h, int d) : hlh(h), dmg(d) {}
    
    void display() 

    {
        cout<<"Health of YOUR CHARACTER: "<<hlh<<"\nDamage of YOUR CHARACTOR: "<<dmg<<endl;
    }

};

class Enemy : public Character{
public:
    
Enemy(int h, int d) : Character(h, d) {}
    
    void display() 

    {
        cout<<"[Enemy]"<<endl;
        Character::display();

    }
};

class Player : public Character 

{
public:
    Player(int h, int d) : Character(h, d) {}
    
    void display() 
    {
        cout<<"[Player]"<<endl;
        Character::display();
    }

};

class Wizard: public Player {
    int mPow;
    string sp;

public:
    Wizard(int h, int d, int m, string s):Player(h,d), mPow(m),sp(s) 
    {}
    
    void display() 
    {
        cout<<"[Wizard]"<<endl;
    
        Player::display();
        cout<<"Magic Power: "<<mPow<<"\nSpell: "<<sp<<"\n";
    
    }

};

int main() 
{
    Wizard wizard(100,20,50, "Fireball");
    wizard.display();
    return 0;
}
