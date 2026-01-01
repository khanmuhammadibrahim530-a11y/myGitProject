#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;

    cout << "Name: M.Ibrahim_72404" << endl;
    cout << "Enter your first number: ";
    cin >> n1;
    cout << "Enter your second number: ";
    cin >> n2;
    cout << "Enter your third number: ";
    cin >> n3;

    if (n1 >= n2 && n1 >= n3)
    {
        cout << "Maximum number is: " << n1 << endl;
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        cout << "Maximum number is: " << n2 << endl;
    }
    else
    {
        cout << "Maximum number is: " << n3 << endl;
    }

    return 0;
}