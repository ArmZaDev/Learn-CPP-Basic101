#include <iostream>
using namespace std;

int main()
{
    string name;
    string status;
    int score;
    //input    

    cout << "Input student name: ";
    cin >> name;
    cout << "Input score: ";
    cin >> score;

    //output
    cout << "-----Description-----" << "\n";
    cout << "Student: " << name << "\n";
    cout << "Score: " << score << "\n";

    // Ternary Operator
    status = (score >= 50) ? "Pass Exam" : "Not Pass";

    cout << "Status = " << status << "\n";

    
    

    


}

