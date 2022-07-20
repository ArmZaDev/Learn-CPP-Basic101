#include <iostream>
using namespace std;

int main()
{
    
    int count = 1;
    int round = 0;

    cout << "Input your round: ";
    cin >> round;

    while (count <= round)
    {
        //cout << "Peaky fookin blinders" << "\n";
        cout << count << "\n";
        count++;
    }
    cout << "-----End Program-----" << endl;
   
    /*
    int count = 1;
    int number = 0;

    cout << "Input number: ";
    cin >> number;

    while (count <= 12) {
        cout << number << " X " << count << " = " << number * count << "\n";
        count++;
    }
    cout << "Complete Program" << endl;
    */
}

