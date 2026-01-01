#include <iostream>
using namespace std;
int main()
{
    int num;
     do
    { cout << "Enter your number :";
        cin >> num;
        cout << " you entered " << num << endl;
    } while (num != -1);
    cout << "end of program";

    return 0;
}