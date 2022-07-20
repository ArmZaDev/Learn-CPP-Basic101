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
    cout << "Input score (0-100): ";
    cin >> score;

    //output
    cout << "-----Description-----" << "\n";
    cout << "Student: " << name << "\n";
    cout << "Score: " << score << "\n";

    if (score >= 80 && score >= 100)
    {
        grade = 'A';
        cout << "Grade = " << grade << "\n";
    }
    else if (score >= 70 && score <= 79)
    {
        grade = 'B';
        cout << "Grade = " << grade << "\n";
    }
    else if (score >= 60 && score <= 69)
    {
        grade = 'C';
        cout << "Grade = " << grade << "\n";
    }
    else if (score >= 50 && score <= 59)
    {
        grade = 'D';
        cout << "Grade = " << grade << "\n";
    }
    else if(score >=0 && score <= 49)
    {
        grade = 'F';
        cout << "Grade = " << grade << "\n";
    }
    else
    {
        grade = 'N';
        cout << "Grade = " << grade << "\n";
        cout << "Input Error! Try again." << "\n";
    }
    
    
}

