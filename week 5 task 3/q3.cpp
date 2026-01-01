#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Name: M.Ibrahim_72404" << endl;
    cout << "Enter your first number: ";
    cin >> a;
    cout << "Enter your second number: ";
    cin >> b;

    if (b == a * a)
    {
        cout << "Second number is square of first number." << endl;
    }
    else
    {
        cout << "Second number is NOT square of first number." << endl;
    }

    return 0;
}