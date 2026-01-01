#include <iostream>
using namespace std;
int main()
{
    int choise;

    do
    {

        cout << "Select your desired option from given below Menu" << endl;
        cout << "-------------MENU-------------" << endl;
        cout << "1. Number is even or odd" << endl;
        cout << "2. Number is prime or not " << endl;
        cout << "3. letter is upper case or lowercase" << endl;
        cout << "4. reverse multiplication table number " << endl;
        cout << "5. descending right angle triangle" << endl;
        cout << "0. To exit" << endl;
        cout << "   Enter your choise  :" ;
        cin >> choise;

        switch (choise)
        {
        case 1:
        {
            int num;
            cout << " Enter your number :" << endl;
            cin >> num;
            if (num % 2 == 0)
            {
                cout << num << "is EVEN number" << endl;
            }
            else
            {
                cout << num << " is ODD number" << endl;
            }
            break;
        }
        case 2:
        {
            int num;
            cout << "Enter your number : ";
            cin >> num;
            int count;
            count = 1;
            if (num <= 1)
            {
                cout << "Not a prime" << endl;
            }
            else
            {
                for (int i = 2; i < num; i++)
                {
                    if (num %i == 0)
                        count++;
                }
                if (count == 1)
                
                    cout << "  prime" << endl;
                
                else
                
                    cout << " not a prime " << endl;
            }
                break;
        }
        case 3:
        {
            char ch;
            cout << "Enter  cherecter";
            cin >> ch;
            if (ch >= 'A' && ch <= 'Z')
            {
                cout << ch << "  is uppercase" << endl;
            }
            else if (ch >= 'a' && ch <= 'z')
            {
                cout << ch << "   is lowercase" << endl;
            }
            else
            {
                cout << ch << "  is not a charecter" << endl;
            }break;}
        case 4:
        {
            int n, li;
            cout << "Enter your number";
            cin >> n;
            cout << "Enter your limit";
            cin >> li;

            for (int i = li; i >= 1; i--)
            {
                cout << n << " X " << i << " = " << n * i << endl;
            }break;}
        case 5:
        {
            for (int i = 7; i >= 1; i--)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << "*";
                }
                cout << endl;
            }break;}
        
        case 0:
            if (choise == 0)
                cout << "exit program" << endl;
            break;

        default:
            cout << "Invalid choise " << endl;
        
        
        
        }
    } while (choise != 0);

    return 0;
}