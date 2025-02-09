/*
Design a class for a StationeryShop that maintains a list of all items it sells, stored as an array
..................................................................................................
items purchased by the customer along with their quantities.
*/
#include <iostream>
using namespace std;

class StationeryShop
{
private:
    string items[100];
    double costs[100];
    int itemQt;

public:
    StationeryShop()
    {
        itemQt = 0;
    }

    void add(string item, double price)
    {
        if (itemQt < 100)
        {
            items[itemQt] = item;
            costs[itemQt] = price;
            itemQt++;
        }
        else
        {
            cout << "Inventory full!!! \nCannot add more items." << endl;
        }
    }

    void view()
    {
        cout << "\nItems in the shop:" << endl;
        for (int i = 0; i < itemQt; i++)
        {
            cout << i + 1 << ". " << items[i] << " - $" << costs[i] << endl;
        }
    }

    void edit(int index, double newPrice)
    {
        if (index >= 0 && index < itemQt)
        {
            costs[index] = newPrice;
        }
        else
        {
            cout << "Invalid item index!" << endl;
        }
    }

    void genRec() //It will generate receipt
    {
        double total = 0.0;
        int choice, quantity;

        cout << "\nGenerating Receipt:" << endl;
        view();

        cout << "\nEnter item numbers and quantities (enter -1 to finish):" << endl;
        while (true)
        {
            cout << "Item number: ";
            cin >> choice;
            if (choice == -1)
                break;
            if (choice < 1 || choice > itemQt)
            {
                cout << "Invalid item number! Try again." << endl;
                continue;
            }
            cout << "Quantity: ";
            cin >> quantity;
            total += costs[choice - 1] * quantity;
        }
        cout << "\nTotal Amount: $" << total << endl;
    }
};

int main()
{
    StationeryShop shop;
    int choice;
    string itemName;
    double itemPrice;
    int index;

    while (true)
    {
         cout << "\nStationery Shop Menu:" << endl;
           cout <<"1. Ads Item" << endl;
        cout << "2. View Item " << endl;
        cout << "3.Edit Item Price" << endl;
        cout << "4. generate Receipt" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose an choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter item namr: ";
             cin >> itemName;
            cout << "Enter item price: ";
            cin>>itemPrice;
            shop.add(itemName, itemPrice);
            break;
        case 2:
             shop.view();
            break;

        case 3:
            cout<<"Enter item number to edit: "  ;
            cin >> index;

            cout << "Enter new price: ";
            cin >> itemPrice;
            shop.edit(index-1, itemPrice);
            break;
        case 4:
            shop.genRec();
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    }
}
