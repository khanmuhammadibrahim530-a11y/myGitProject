#include <iostream>
using namespace std;

int main() {
    int chem, phy, bio, sum;
    double avg;
    
    cout << "Name: M.Ibrahim_72404" << endl;
    cout << "Enter your marks in Chemistry: ";
    cin >> chem;
    cout << "Enter your marks in Physics: ";
    cin >> phy;
    cout << "Enter your marks in Biology: ";
    cin >> bio;
    
    sum = chem + phy + bio;
    avg = sum / 3.0;
    
    if (avg > 80) {
        cout << "You are above standard" << endl;
        cout << "Admission Granted" << endl;
    }
    
    return 0;
}