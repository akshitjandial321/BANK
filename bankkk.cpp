#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;
static int new_acc_no = 1000;

class Bank
{
private:
    string name;
    string address;
    int acc_no, balance;

public:
    void welcom()
    {
        string welcome = " Welcome to Akshit Bank ";
        for (int i = 0; i < 20; i++)
        {
            Sleep(100);
            cout << "<";
        }
        for (int i = 0; i < welcome.length(); i++)
        {
            Sleep(100);
            cout << welcome[i];
        }

        for (int i = 0; i < 20; i++)
        {
            Sleep(100);
            cout << ">";
        }
        cout << endl
             << endl
             << endl;
    }

    void new_account()
    {
        cout << "Enter Your name:";
        cin >> name;
        cout << "Enter your Address:";
        cin >> address;
        cout << "Enter the Initial Balance(>500):";
        cin >> balance;
        acc_no = generate_acc_no();
        cout << "Your Account Number is:" << acc_no;
        /*y:
        if (balance > 500)
        {
        }
        else
        {
            int ch;
            cout << "1:Re-enter Balance" << endl
                 << "2:Go to Main Menu" << endl
                 << "Enter your Choice:";
            cin >> ch;
            switch (ch)
            {
            case 1:
            {
                goto y;
                break;
            }
            case 2:
            {

                break;
            }
            }
        }*/
    }

    int generate_acc_no()
    {
        new_acc_no++;
        acc_no = new_acc_no;
        return acc_no;
    }
    void display_information()
    {
        cout << "Account Number:" << acc_no << endl
             << "Name:" << name << endl
             << "Address:" << address << endl
             << "Balance:" << balance << endl;
    }
    void deposit()
    {
        int amount;
        cout << "Enter the amount to Deposit:";
        cin >> amount;
        this->balance = balance + amount;
        cout << "your updated balance is:" << balance;
    }
    void withdraw()
    {
        int amount;
        cout << "Enter the amount to Withdraw:";
        cin >> amount;
        if (balance > (amount + 500))
        {
            this->balance = balance - amount;
            cout << "your updated balance is:" << balance;
        }
        else
        {
            cout << "Insufficient Balance" << endl;
        }
    }
    void address_change()
    {
        string new_address;
        cout << "Enter your new Address:";
        cin >> new_address;
        address.replace(0, new_address.length(), new_address);
        cout << "Your updated Address is:" << address;
    }
};

int main()
{
    Bank wel;
    wel.welcom();
    Bank obj[10];
    int ch, i = 0;
    do
    {
        cout << endl
             << "1:Open Account" << endl
             << "2:Display Information" << endl
             << "3:Deposit" << endl
             << "4:Withdraw" << endl
             << "5:Change Address"
             << "6:Exit" << endl
             << "Enter your Choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            int i;
            obj[i].new_account();
            i++;
            break;
        }
        case 2:
        {
            int acc, a;
            cout << "Enter the last digit of Account Number:";
            cin >> acc;
            a = acc + 1;
            obj[a].display_information();
            break;
        }
        case 3:
        {
            int acc, a;
            cout << "Enter the last digit of Account Number:";
            cin >> acc;
            a = acc + 1;                                                                                                                                                                                                                                                                                                                                                                                                                                                            
            obj[a].deposit();
            break;
        }
        case 4:
        {
            int acc, a;
            cout << "Enter the last digit of Account Number:";
            cin >> acc;
            a = acc + 1;
            obj[a].withdraw();
            break;
        }
        case 5:
        {
            int acc, a;
            cout << "Enter the last digit of Account Number:";
            cin >> acc;
            a = acc + 1;
            obj[a].address_change();
            break;
        }
        case 6:
        {
            goto z;
            break;
        }
        }
    } while (ch > 0);
z:
    return 0;
}