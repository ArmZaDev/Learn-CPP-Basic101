#include <iostream>
using namespace std;

int main()
{
    // gender (male, female), age (integer)
    string gender;
    string status;
    int age;

    //input
    cout << "Input your gender: ";
    cin >> gender;
    cout << "Input your age: ";
    cin >> age;

    //output
    cout << "-----Description-----" << "\n";
    cout << "Your Gender: " << gender << "\n";
    cout << "Your Age: " << age << "\n";

    /*
    if (gender == "male" && age >= 20)
    {
        status = "Pass Interview";
    }
    else
    {
        status = "Not Pass";
    }
    cout << status << "\n";
    */
    
    
    if (gender == "male" || gender == "female" && age >= 20) //female OR male
    {
        status = "Pass Interview";
    }
    else
    {
        status = "Not Pass";
    }
    cout << status << "\n";

    /*
    if (!(gender == "male"))
    {
        status = "Pass Interview";
    }
    else
    {
        status = "Not Pass";
    }
    cout << status << "\n";
    */
    
}

