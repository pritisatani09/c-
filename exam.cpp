#include<iostream>
using namespace std;

//simple grade calculate
int main()
{
    int score;
    char grade;

    cout << "Enter the score: ";
    cin >> score;

    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' : 'F';

    cout << "The grade is: " << grade << endl;

    cout << "Enter your grade: ";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Excellent work!you are eligible for the next level." << endl;
            break;
        case 'B':
            cout << "Well done!" << endl;
            break;
        case 'C':
            cout << "Good job!" << endl;
            break;
        case 'D':
            cout << "You passed, but you could do better." << endl;
            break; 
        default:
            cout << "Invalid grade entered. Please enter A, B, C, D" << endl;
    }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
        cout << "You are eligible for the next level." << endl;
        } else if (grade == 'F') {
        cout << "Please try again next time." << endl;
        } else {
        cout << "Invalid grade entered. Please enter a valid grade." << endl;
    }

    return 0;
}