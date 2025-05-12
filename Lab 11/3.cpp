#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;
public:
    Pair(T1 f, T2 s) : first(f), second(s) {}
    
    void display() const {
        cout << "Pair: (" << first <<" "<< second << ")" << endl;
    }
};

int main() 
{
    Pair<int, string> p1(5, "Pizza");
    p1.display();
    
    Pair<double, int> p2(3.14, 42);
    p2.display();
    
    return 0;
}