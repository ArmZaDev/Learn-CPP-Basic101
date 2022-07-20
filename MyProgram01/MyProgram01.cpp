#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    int sum = 0;
    
    
    while (true) 
    {
        cout << "Input your number: ";
        cin >> number;
        
        if (number <= 0)break;

        sum += number;
    }
    cout << "Summation = " << sum << endl;
    
    /*
    do 
    {
        cout << "Input your number: ";
        cin >> number;

        if (number <= 0)break;

        sum += number;
    } while (true);
    cout << "Summation = " << sum << endl;
    */
}

