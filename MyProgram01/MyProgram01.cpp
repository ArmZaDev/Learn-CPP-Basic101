#include <iostream>
using namespace std;

int main()
{
    int amount = 0;
    cout << "Input your amount: ";
    cin >> amount;
    cout << "Amount = " << amount << "\n";

    if (amount >= 15000)
    {
        cout << "You have discount";
        if(amount == 15000)
        {
            cout << " 10%" << "\n";
        }
        else if (amount == 20000)
        {
            cout << " 20%" << "\n";
        }
        else 
        {
            cout << " 50%" << "\n";
        }
        
    }
    else
    {
        cout << "You don't have discount";
    }
    
}

