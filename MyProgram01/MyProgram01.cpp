#include <iostream>
using namespace std;

int main()
{
    
    int service = 0;
    cout << "intput service number (1-2): ";
    cin >> service;

    switch (service)
    {
        case 1:
            cout << "Create New Bank Account!";
            break;
        case 2:
            cout << "Withdraw and Deposite";
            break;
        default:
            cout << "invalid Choice";
            break;
    }
    
    /*
    char confirm;
    cout << "Do you want to exit program (y/n): ";
    cin >> confirm;

    switch (confirm) 
    {
        case 'y':
            cout << "Exit Program";
            break;
        case 'n':
            cout << "Cancel";
            break;
        default:
            cout << "Unkown";
            break;
    }
    */

}

