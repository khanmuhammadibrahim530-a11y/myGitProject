/*Q # 4: Write a program that inputs total number of students in a class and fee per student. It displays total
fee collected from the class. */
#include <iostream>
using namespace std;
int main()
{
    int students;
    cout << "Name :Muhammad Ibrahim khan  Sap:72404 " << endl;
    cout << "Enter total number of  students :";
    cin >> students;
    int fee;
    cout << "Enter fee per sudent : ";
    cin >> fee;
    int total_fee = fee * students;
    cout << "Total fee colleccted from class is " << total_fee << endl;
    return 0;
}