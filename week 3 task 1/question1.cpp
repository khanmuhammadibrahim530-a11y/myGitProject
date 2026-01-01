// Q # 1: Write a program that inputs age in years and displays age in months and days.
#include <iostream>
using namespace std;
int main()
{
    cout << "Name :Muhammad Ibrahim khan  Sap:72404 " << endl;
    int years;
    cout << "Enter your age in years:";
    cin >> years;
    int months = years * 12;
    int days = years * 365;
    cout << "your age in months is;" << months << endl;
    cout << "your age in days is;  " << days << endl;
    return 0;
}