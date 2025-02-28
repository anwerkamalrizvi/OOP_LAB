#include <iostream>
#include <string>

using namespace std;

class MenuItem{
private:
    string naam;
    float cap;

public:
    MenuItem(string naam = "", float cap = 0.0) : naam(naam), cap(cap) {}

    string getNaam() 
    const{
        return naam;
    }

    float getCap() 
    const{
        return cap;
    }

    void show() 
    const{
        cout << "Item: " << naam << "\nPrice in rupees: " << cap << endl;
    }

    void setDetails(string n, float p) 
    {
        naam = n;
        cap = p;
    }
};

class Menu{
private:
    MenuItem items[100];
    int cnt;

public:
    Menu() : cnt(0) {}

    void addItem(const MenuItem& itm) 
    
    {
        if (cnt <100) 
        {
            items[cnt++] = itm;
        } else{
            cout << "Items cant add menu is full now." << endl;
        }
    }

    void removeItem(const string& itmNaam) {
        bool found = false;
        for (int i = 0; i < cnt; ++i) 
        {
        if (items[i].getNaam() == itmNaam) 
            {
        for (int j = i; j < cnt - 1; ++j) 
                {
                    items[j] = items[j + 1];
                }
                cnt--;
                
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "ERROR 404. Item NOT found!" << endl;
        }
    }

    void showMenu() 
    {
        cout << "Menu:" << endl;
        for (int i = 0; i < cnt; ++i) {
            items[i].show();
        }
    }
};

class Payment{
private:
    float amt;

public:
    Payment() : amt(0) {}

    void calcAmt(const MenuItem ordItems[], int ordCnt) 
    {
        amt = 0;
        for (int i = 0; i < ordCnt; ++i) 
        {
            amt += ordItems[i].getCap();
        }
    }

    float getAmt()  
    const{
        return amt;
    }

    void showAmt() 
    const{
        cout << "\nPayment is Rs. " << amt << endl;
    }
};

class Order{
private:
    MenuItem ordItems[100];
    int ordCnt;
    Payment pay;

public:
    Order() : ordCnt(0) {}

    void placeOrder(const MenuItem items[], int itemCnt) 
    {
        ordCnt = itemCnt;
        for (int i = 0; i < itemCnt; ++i) 
        
        {
            ordItems[i] = items[i];
                            //itemCnt++;
        }
        
        pay.calcAmt(ordItems, ordCnt);
    }

    void showOrder() 
    const{
        cout << "Order is: " << endl;
        for (int i = 0; i < ordCnt; ++i) 
        
        {
            ordItems[i].show();
        }
        pay.showAmt();
    }
};

int main() 
{
    MenuItem channaChat("Masala Daar Khateyawari Channa Chaat", 130);
    MenuItem kachori("New Special Kachori with Aloo Sabzi", 100);
    MenuItem halwaPuri("Special Halwa Puri", 150);

    Menu mnu;
    mnu.addItem(channaChat);
    mnu.addItem(kachori);
    mnu.addItem(halwaPuri);

    mnu.showMenu();

    MenuItem ordItems[3] = {halwaPuri, kachori, channaChat};  
    Order ord;
    ord.placeOrder(ordItems, 2);

    ord.showOrder();

    mnu.removeItem("Special Halwa Puri");
    cout << "\nUpdated after removing Special Halwa Puri" << endl;
    mnu.showMenu();

    return 0;
}
