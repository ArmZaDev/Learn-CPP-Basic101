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

    // score >= 50 => pass exam // score < 50 => not pass
    if (score >= 50) 
    {
        status = "Pass Exam";
        //cout << "Pass Exam" << "\n";
    }
    else
    {
        status = "Not Pass";   
        //cout << "Not Pass" << "\n";
    }
    cout << "Satus: " << status << "\n";
    
    

    


}

