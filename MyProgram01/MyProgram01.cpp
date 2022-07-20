#include <iostream>
using namespace std;

int main()
{
    string name;
    string status;
    int score;
    char grade;
    //input    

    cout << "Input student name: ";
    cin >> name;
    cout << "Input score: ";
    cin >> score;

    //output
    cout << "-----Description-----" << "\n";
    cout << "Student: " << name << "\n";
    cout << "Score: " << score << "\n";

    if (score >= 80)
    {
        grade = 'A';
    }
    else if(score >= 70)
    {
        grade = 'B';
    }
    else if (score >= 60)
    {
        grade = 'C';
    }
    else if (score >= 50)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
    cout << "Grade = " << grade << "\n";

     
}

