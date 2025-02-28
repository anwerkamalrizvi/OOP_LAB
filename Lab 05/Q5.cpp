#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class VStr
{
private:
    string s;

public:
    VStr(string str) : s(str) {}

    bool isValid() const 
    {
        for (char c : s)
         {
            if (!isalpha(c)) 
            {
                return false;
            }
        }
        return true;
    }
};

int main() 
{
    VStr vs1("Muhammad Omer Siddiqui");
    VStr vs2("Syed Anwer Kamal Rizvii");
    
    if (vs1.isValid()) 
    {
        cout << "Valid: Muhammad Omer Siddiqui" << endl;
    } else{
        cout << "Invalid: Muhammad Omer Siddiqui" << endl;
    }

    if (vs2.isValid()){
        cout << "Valid: Syed Anwer Kamal Rizvi" << endl;
    } else{
        cout << "Invalid: Syed Anwer Kamal Rizvi" << endl;
    }

    return 0;
}
