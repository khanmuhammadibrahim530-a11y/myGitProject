#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Name: M.Ibrahim_72404" << endl;
    cout << "Enter your number: ";
    cin >> number;

    if (number > 0)
    {
        cout << "Number is positive." << endl;
    }
    else if (number < 0)
    {
        cout << "Number is negative." << endl;
    }
    else
    {
        cout << "Number is zero." << endl;
    }

    return 0;
}