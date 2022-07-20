#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    int sum = 0;
    /*
    for (int count = 1; count <= 5; count++) {
        cout << "Input your number: ";
        cin >> number;
        sum += number;
    }
    cout << "Summation = " << sum;
    */


    int count = 1;
    do {
        cout << "Input your number: ";
        cin >> number;
        sum += number;
        count++;
    } while (count <= 2);
    cout << "Summation = " << sum;

    
    
}

