/*

1. Design a class named BoardMarker with the following attributes:
.........................................................................................................
Demonstrate the functionality by creating 3 instances of BoardMarker, setting attribute values,
and calling the methods to test writing and refilling operations for each of the 3 markers.

*/
#include <iostream>
using namespace std;

class boardMaker{
    string company;

    string color;
    bool refill;
    bool inkStatus;

    public:
        void getCmp(string getCmp)
        {
            company = getCmp;
        }  
        void getColor(string getColor){
            color = getColor;
        }
        void getRefill(bool getRefill){
            refill = getRefill;
        }
        void getInkStatus(bool getInkStatus){
            inkStatus = getInkStatus;
        }
        string setCmp(){
            return company;
        }
        string setColor(){
            return color;
        }
        bool setRefill(){
            return refill;
        }
        bool setInkStatus(){
            return inkStatus;
        }
        void write(bool inkStatus)
        {   
            if(inkStatus == false) cout<<"The Ink is empty"<<endl;
            else cout<<"The Ink is not empty"<<endl;
        }
        bool refill1(bool refill)
        {
            if(inkStatus == false )
            {
                cout<<"The marker need refill";
                refill = true;
            }

            else{
                cout<<"The marker dont need refill";
            }
        }


};

int main()
{   
    boardMaker b1,b2,b3;
    b1.getCmp("Dollar");
    b1.getColor("Blue");
    b1.getInkStatus(true);
    b1.getRefill(true);
    b1.setCmp();
    b1.setColor();
    b1.setInkStatus();
    b1.setRefill();
    b1.write(true);
    b1.refill1(true); //writing refill instead was giving errors ie. function variable misunderstanding by compiler
    return 0;

}
