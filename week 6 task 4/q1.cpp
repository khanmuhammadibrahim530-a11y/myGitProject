#include <iostream>
using namespace std;

int main() {
    char character;
    
    cout << "M.Ibrahim__72404" << endl;
    cout << "Enter a character to check if it is vowel or not: ";
    cin >> character;
    
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
        character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
        cout << character << " is vowel" << endl;
    }
    else {
        cout << character << " is not vowel" << endl;
    }
    
    return 0;
}