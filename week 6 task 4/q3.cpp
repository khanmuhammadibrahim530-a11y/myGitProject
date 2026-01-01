#include <iostream>
using namespace std;

int main()
{
    char grade;

    cout << "M.Ibrahim__72404" << endl;
    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
    case 'a':
        cout << "Your test score is >= 90" << endl;
        break;
    case 'B':
    case 'b':
        cout << "Your test score is 80-89" << endl;
        break;
    case 'C':
    case 'c':
        cout << "Your test score is 70-79" << endl;
        break;
    case 'D':
    case 'd':
        cout << "Your test score is 60-69" << endl;
        break;
    case 'F':
    case 'f':
        cout << "Your test score is below 60" << endl;
        break;
    default:
        cout << "Invalid grade" << endl;
    }

    return 0;
}