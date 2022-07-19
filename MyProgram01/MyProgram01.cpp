#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 5;

    cout << "X = " << x << " Y = " << y << "\n\n";
    
    x += y; //x = x + y;
    cout << "X = " << x << endl;

    x -= y; //x = x - y;
    cout << "X = " << x << endl;

    x *= y; //x = x * y;
    cout << "X = " << x << endl;

    x /= y; //x = x / y;
    cout << "X = " << x << endl;

    x %= y; //x = x % y;
    cout << "X = " << x << endl;

}

