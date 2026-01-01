#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Name: M.Ibrahim_72404" << endl;
    cout << "Enter your number: ";
    cin >> num;
    
    if (num % 2 == 0) {
        cout << "Number is even." << endl;
    } else {
        cout << "Number is odd." << endl;
    }
    
    return 0;
}