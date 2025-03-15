#include <iostream>
using namespace std;

class Position{
protected:
    int x, y, z;

public:
    Position(int x = 0, int y = 0, int z = 0):x(x), y(y), z(z) {}
    
    void setPosition(int nx, int ny, int nz) 
    
    {
        x = nx;
        y = ny;
        z = nz;
    }
    
    void displayPosition() 
    {
        
        cout<<"AXES OF MY PLAYER:\nX: "<<x<<", Y: "<<y<< ", Z: "<<z<<endl;
    }

};

class Health{

protected:
    int hlh;

public:
    Health(int h = 100):hlh(h) 
    {}
    
    void setHealth(int h) 
    {
        hlh = h;
    }
    
    void displayHealth() 
    {
        cout<<"Health of YOUR CHARACTER: "<<hlh<<endl;
    }
};

class Character : public Position, public Health {
private:
    string naam;

public:
    Character(string n, int x, int y, int z, int h) : Position(x, y, z), Health(h), naam(n) {}
    
    void display() {
        cout<<"CHARACTER NAME:  "<<naam<<endl;
        displayPosition();
        displayHealth();
    }
};

int main() 
{
    Character hero("ANWER's AI MUTLISHOOT ROBOT", 10,20,5,150);
    hero.display();
    return 0;
}
