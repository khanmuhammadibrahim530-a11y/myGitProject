// Q #2 Write a program that inputs 4 numbers and calculates the sum, average, and product of all the numbers.
#include <iostream>  
using namespace std;
int main()
{
    cout << "Name :Muhammad Ibrahim khan  Sap:72404 " << endl;
    int n1, n2, n3, n4;
    cout << "Enter your  First number  :";
    cin >> n1;
    cout << "Enter your second number :";
    cin >> n2;
    cout << "Enter your third number :";
    cin >> n3;
    cout << "Enter your Fourth number :";
    cin >> n4;
    int sum = n1 + n2 + n3 + n4;
    int product = n1 * n2 * n3 * n4;
    float average = sum / 4.0;
    cout << "Sum of your given number is  ;" << sum << endl;
    cout << "product of your given number is ;" << product << endl;
    return 0;
}
