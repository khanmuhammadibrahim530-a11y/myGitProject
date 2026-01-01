#include <iostream>
#include <string>
using namespace std;

// ===== Global FIR Data =====
string fir_title[10];
string fir_detail[10];
string fir_status[10];
int fir_count = 0;

// ===== Function Declarations =====
void registerFIR();
void viewFIR();
void adminView();
void adminUpdate();
void adminDelete();

int main()
{
    // ===== Login Credentials =====
    int userpas = 72404;
    string Usn = "ibrahim";
    int adpas = 123;
    string adun = "khan";

    int us_ch;
    cout << "\n========== FIR MANAGEMENT SYSTEM ==========\n";

    do
    {
        cout << "\n1. User Panel";
        cout << "\n2. Admin Panel";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> us_ch;

        switch (us_ch)
        {
        // ================= USER PANEL =================
        case 1:
        {
            int attempts = 0, userpassword;
            string username;
            bool loggedin = false;

            do
            {
                cout << "Enter Username: ";
                cin >> username;
                cout << "Enter Password: ";
                cin >> userpassword;
                attempts++;

                if (username == Usn && userpassword == userpas)
                {
                    loggedin = true;
                    cout << "User Login Successful!\n";
                    break;
                }
                else
                {
                    cout << "Wrong login! Attempts left: "
                         << 3 - attempts << endl;
                }
            } while (attempts < 3);

            if (loggedin)
            {
                int ch1;
                do
                {
                    cout << "\n----- USER PANEL -----";
                    cout << "\n1. Register New FIR";
                    cout << "\n2. View My FIRs";
                    cout << "\n3. Check FIR Status";
                    cout << "\n4. Back to Main Menu";
                    cout << "\nEnter choice: ";
                    cin >> ch1;

                    switch (ch1)
                    {
                    case 1:
                        registerFIR();
                        break;
                    case 2:
                        viewFIR();
                        break;
                    case 3:
                    {
                        int num;
                        cout << "Enter FIR Number to check status: ";
                        cin >> num;
                        if (num > 0 && num <= fir_count)
                        {
                            cout << "Status of FIR " << num << ": "
                                 << fir_status[num - 1] << endl;
                        }
                        else
                        {
                            cout << "Invalid FIR Number!\n";
                        }
                        break;
                    }
                    case 4:
                        cout << "Returning to Main Menu...\n";
                        break;
                    default:
                        cout << "Invalid Choice!\n";
                    }
                } while (ch1 != 4);
            }
            break;
        }

        // ================= ADMIN PANEL =================
        case 2:
        {
            int attempts = 0, userpassword;
            string username;
            bool loggedin = false;

            do
            {
                cout << "Enter Username: ";
                cin >> username;
                cout << "Enter Password: ";
                cin >> userpassword;
                attempts++;

                if (username == adun && userpassword == adpas)
                {
                    loggedin = true;
                    cout << "Admin Login Successful!\n";
                    break;
                }
                else
                {
                    cout << "Wrong login! Attempts left: "
                         << 3 - attempts << endl;
                }
            } while (attempts < 3);

            if (loggedin)
            {
                int ch2;
                do
                {
                    cout << "\n----- ADMIN PANEL -----";
                    cout << "\n1. View All FIRs";
                    cout << "\n2. Update FIR Status";
                    cout << "\n3. Delete FIR";
                    cout << "\n4. Back to Main Menu";
                    cout << "\nEnter choice: ";
                    cin >> ch2;

                    switch (ch2)
                    {
                    case 1:
                        adminView();
                        break;
                    case 2:
                        adminUpdate();
                        break;
                    case 3:
                        adminDelete();
                        break;
                    case 4:
                        cout << "Returning to Main Menu...\n";
                        break;
                    default:
                        cout << "Invalid Choice!\n";
                    }
                } while (ch2 != 4);
            }
            break;
        }

        case 3:
            cout << "Program Exiting...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (us_ch != 3);

    return 0;
}

// ================= FUNCTION DEFINITIONS =================

void registerFIR()
{
    if (fir_count < 10)
    {
        cin.ignore();
        cout << "Enter FIR Title: ";
        getline(cin, fir_title[fir_count]);

        cout << "Enter FIR Detail / Complaint: ";
        getline(cin, fir_detail[fir_count]);

        fir_status[fir_count] = "Pending";
        fir_count++;

        cout << "FIR Registered Successfully!\n";
    }
    else
    {
        cout << "FIR Limit Reached!\n";
    }
}

void viewFIR()
{
    bool found = false;
    for (int i = 0; i < fir_count; i++)
    {
        if (fir_status[i] != "Deleted")
        {
            cout << "\nFIR No: " << i + 1
                 << "\nTitle: " << fir_title[i]
                 << "\nDetail: " << fir_detail[i]
                 << "\nStatus: " << fir_status[i] << endl;
            found = true;
        }
    }
    if (!found)
        cout << "No FIR Found!\n";
}

void adminView()
{
    if (fir_count == 0)
    {
        cout << "No FIR Found!\n";
    }
    else
    {
        for (int i = 0; i < fir_count; i++)
        {
            cout << "\nFIR No: " << i + 1
                 << "\nTitle: " << fir_title[i]
                 << "\nDetail: " << fir_detail[i]
                 << "\nStatus: " << fir_status[i] << endl;
        }
    }
}

void adminUpdate()
{
    if (fir_count == 0)
    {
        cout << "No FIR to Update!\n";
        return;
    }

    int num;
    cout << "Enter FIR Number to Update: ";
    cin >> num;

    if (num > 0 && num <= fir_count)
    {
        cout << "Enter New Status: ";
        cin >> fir_status[num - 1];
        cout << "Status Updated Successfully!\n";
    }
    else
    {
        cout << "Invalid FIR Number!\n";
    }
}

void adminDelete()
{
    if (fir_count == 0)
    {
        cout << "No FIR to Delete!\n";
        return;
    }

    int num;
    cout << "Enter FIR Number to Delete: ";
    cin >> num;

    if (num > 0 && num <= fir_count)
    {
        // FIR mark as deleted
        fir_title[num - 1] = "Deleted";
        fir_detail[num - 1] = "";
        fir_status[num - 1] = "Deleted";
        cout << "FIR Deleted Successfully!\n";
    }
    else
    {
        cout << "Invalid FIR Number!\n";
    }
}
