#include <iostream>
#include <string>

using namespace std;

class Airport{
private:
    string name;
    string cit;

public:
    Airport(string n = "", string c = "") : name(n), cit(c) {}
    //initialzed 
    void setDetails(string n, string c) 
    {
        name = n;
        cit = c;
    }

    void show() 
    const{
        cout << "Airport:  " << name << "\ncity: " << cit << endl;
    }
};

class Flight {
private:
    string flno;
    Airport ap[10]; 
    int stpCnt;

public:
    Flight(string fn = "") : flno(fn), stpCnt(0) {}

    void addStop(const Airport& a) 
    {
        if (stpCnt < 10) 
        {
            ap[stpCnt++] = a;
        } else{
            cout << "Stps can not be added more!!!" << endl;
        }
    }

    void show() 
    const{
        cout << "Flight #: " << flno << endl;
        for (int i = 0; i < stpCnt; ++i) 
        {
            cout << "Stop #" << i+1 << ": ";
            ap[i].show();
        }
    }
};

int main() {
    Airport gwadar("Gwadar International", "Gwadar, Balochistan");
    Airport karachi("Karachi International", "Karachi, Sindh");
    Airport jeddah("Jedddah International", "Jeddah, Mecca");

   Flight pk0033("PK-0033");
    pk0033.addStop(gwadar); 
    pk0033.addStop(karachi);
    pk0033.addStop(jeddah);

    pk0033.show();

    return 0;
}
