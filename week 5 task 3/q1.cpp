#include <iostream>
using namespace std;

int main()
{
    int num1, num2, temp;

    cout << "Name: M.Ibrahim_72404" << endl;
    cout << "Enter your first number: ";
    cin >> num1;
    cout << "Enter your second number: ";
    cin >> num2;

    // Swapping
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "The numbers after swap are:" << endl;
    cout << "The value of first number = " << num1 << endl;
    cout << "The value of second number = " << num2 << endl;

    return 0;
}