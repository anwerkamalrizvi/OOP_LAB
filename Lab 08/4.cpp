#include <iostream>
using namespace std;

class TrafficSystem {
private:
    int cars;
    int delay;
public:
    TrafficSystem(int c, int d) : cars(c), delay(d) {}
    
    TrafficSystem operator+( int n) 
    {
        return TrafficSystem(cars + n, delay);
    }
    
    TrafficSystem operator-(int n) 
    {
        return TrafficSystem(cars - n, delay);
    }
    
    TrafficSystem operator*(int n ) 
    {
        return TrafficSystem(cars, delay * n);
    }
    
    bool operator==(TrafficSystem t) 
    {
        return (cars == t.cars) && (delay == t.delay);
    }
    
    void show() 
    {
        cout << cars << " cars \n " << delay << " min delay\n";
    }
};


int main(void) 
{
    TrafficSystem t1(50,5), t2(100,10);
    (t1 + 20).show();
    (t1 - 15).show();
    (t1 * 2).show();
    cout << (t1 == t2) << endl;
    return 0;
}