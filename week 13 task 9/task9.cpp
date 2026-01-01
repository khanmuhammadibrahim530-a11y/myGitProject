#include <iostream>
using namespace std;
double Addition(double, double);
double multiplication(double, double);
double subtraction(double, double);
double division(double, double);
int power(double, int);
int main()
{
    double a, b, sum, dif, product, div, pow;
    int n;
    cout << "Name: Muhammad Ibrahim  \n  SAP:72404" << endl;
    cout << "1.addition\n 2. multiplication\n 3.subtraction\n 4. division\n5.power" << endl;
    cout << "Enter choise" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Enter two numbers" << endl;
        cin >> a >> b;
        sum = Addition(a, b);
        cout << "Addition of two numbers is " << sum << endl;
        break;
    case 2:
        cout << "Enter two numbers" << endl;
        cin >> a >> b;
        product = multiplication(a, b);
        cout << "multiplication of two numbers is " << product << endl;
        break;
    case 3:
        cout << "Enter two numbers" << endl;
        cin >> a >> b;
        dif = subtraction(a, b);
        cout << "subtraction of two numbers is " << dif << endl;
        break;
    case 4:
        cout << "Enter two numbers" << endl;
        cin >> a >> b;
        div = division(a, b);
        cout << "division of two numbers is " << div << endl;
        break;
    case 5:
        cout << "Enter number" << endl;
        cin >> a;
        cout << "enter power number:";
        cin >> b;
        pow = power(a, b);
        cout << "power of number is :" << pow << endl;
        break;
    default:
        cout << "Invalid choise" << endl;
    }
}
double Addition(double a, double b)
{
    return a + b;
}
double multiplication(double a, double b)
{
    return a * b;
}
double subtraction(double a, double b)
{
    return a - b;
}
double division(double a, double b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        cout << "0 in denominatoer is not allowed for division";
        return 0;
    }
}

int power(double a, int b)

{
    double p = 1;
    for (int i = 1; i <= b; i++)
        p *= a;
    return p;
}
