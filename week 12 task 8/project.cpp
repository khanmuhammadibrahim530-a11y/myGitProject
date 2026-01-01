#include <iostream>
using namespace std;
int main()
{
  int userpas = 72404;
  string Usn = "ibrahim";
  int adpas = 123;
  string adun = "khan";

  cout << "\n==========FIR MANAGEMENT SYSTEM==========" << endl;
  int us_ch;

  do
  {
    cout << "1.user Pannel" << endl;
    cout << "2.Admin Pannel" << endl;
    cout << "3.Exit" << endl;
    cout << "Enter your choise :" << endl;
    cin >> us_ch;

    switch (us_ch)
    {
    case 1:
    {

      int attempts = 0;
      int userpassword;
      string username;
      int ch1;
      bool loggedin = false;
      do
      {
        cout << "Enter Password :";
        cin >> userpassword;
        cout << "Enter username :";
        cin >> username;
        attempts++;
        if (username == Usn && userpassword == userpas)
        {
          loggedin = true;
          cout << "loging in successfullly" << endl;
          break;
        }
        else
        {

          cout << "wrong username or password try again!" << "you have"
               << 3 - attempts << "attempts left" << endl;
        }
      } while (attempts < 3);
      if (loggedin)
        do
        {
          cout << "\n============User Panel============" << endl;
          cout << "\n1.register new Fir " << endl;
          cout << "2.view my fir " << endl;
          cout << "3.Back to Main Menu  " << endl;
          cin >> ch1;

          switch (ch1)
          {

          case 1:
          {
            cout << "Register new Fir " << endl;
            break;
          }
          case 2:
          {
            cout << "VIEW MY FIR" << endl;
            break;
          }
          case 3:
          {
            cout << "returning to main menue" << endl;
            break;
          }
          default:
            cout << "enter valid choise" << endl;
            break;
          }

        } while (ch1 != 3);
      break;
    }
    case 2:
    {int attempts = 0;
      int userpassword;
      string username;
      int ch2;
      bool loggedin = false;
      do
      {
        cout << "Enter Password :";
        cin >> userpassword;
        cout << "Enter username :";
        cin >> username;
        attempts++;
        if (username == adun && userpassword == adpas)
        {
          loggedin = true;
          cout << "loging in successfullly" << endl;
          break;
        }
        else
        {
          cout << "wrong username or password try again!" << "you have"
               << 3 - attempts << "attempts left" << endl;
        }
      } while (attempts < 3);
      if (loggedin)
      {

        do
        {
          cout << "\n============Admin Panel============" << endl;
          cout << "\n1. View All FIRs " << endl;
          cout << "2.Update FIR Status " << endl;
          cout << "3.Delete FIR  " << endl;
          cout << "4.Back to Main Menu  " << endl;
          cin >> ch2;

        } while (ch2 != 4);
        cout << "returning to main menu" << endl;
      }
      break;
    }
    case 3:
    {
      cout << "Program exitimg";
      break;
    }
    default:
      cout << "enter valid choise" << endl;
      break;
    }
  } while (us_ch != 3);

  return 0;
}