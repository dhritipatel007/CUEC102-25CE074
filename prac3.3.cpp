#include<iostream>
using namespace std;

class bank
{
    int num;
    string name;
    int curr_bal;

    static int total;

public:
    bank()
    {
        num = 0;
        name = "default";
        curr_bal = 0;
    }

    bank(int accNo, string accName, int accBal)
    {
        num = accNo;
        name = accName;
        curr_bal = accBal;
        total++;
    }

    void input()
    {
        cout << "Enter account number: ";
        cin >> num;
        cout << "Enter account holder's name: ";
        cin >> name;
        cout << "Enter current balance: ";
        cin >> curr_bal;

        total++;
    }

    void display()
    {
        cout << "\nAccount number: " << num << endl;
        cout << "Holder's name: " << name << endl;
        cout << "Current balance: " << curr_bal << endl;
    }

    int getAccNo()
    {
        return num;
    }

    bool withdraw(int amount)
    {
        if(amount <= 0)
        {
            cout << "Invalid amount!" << endl;
            return false;
        }
        if(amount > curr_bal)
        {
            cout << "Insufficient balance!" << endl;
            return false;
        }
        curr_bal -= amount;
        return true;
    }

    void deposit(int amount)
    {
        curr_bal += amount;
    }

    bool transfer(bank &receiver, int amount)
    {
        if(withdraw(amount))
        {
            receiver.deposit(amount);
            cout << "Transfer successful!" << endl;
            return true;
        }
        return false;
    }

    static int getTotal()
    {
        return total;
    }
};

int bank::total = 0;

int main()
{
    bank *b = new bank[100];
    int ch;

    do
    {
        cout << "\n--------------------------" << endl;
        cout << "1. Add Account" << endl;
        cout << "2. Display All Accounts" << endl;
        cout << "3. Transfer Money" << endl;
        cout << "4. Show Total Accounts" << endl;
        cout << "0. Exit" << endl;

        cout << "Enter choice: ";
        cin >> ch;

        if(ch == 1)
        {
            int index = bank::getTotal();
            b[index].input();
        }

        else if(ch == 2)
        {
            int total = bank::getTotal();

            if(total == 0)
            {
                cout << "No accounts available!" << endl;
            }
            else
            {
                for(int i = 0; i < total; i++)
                {
                    b[i].display();
                    cout << "-------------------" << endl;
                }
            }
        }

        else if(ch == 3)
        {
            int s, r, amount;
            cout << "Enter sender account number: ";
            cin >> s;
            cout << "Enter receiver account number: ";
            cin >> r;

            bank *sender = NULL;
            bank *receiver = NULL;

            for(int i = 0; i < bank::getTotal(); i++)
            {
                if(b[i].getAccNo() == s)
                    sender = &b[i];

                if(b[i].getAccNo() == r)
                    receiver = &b[i];
            }

            if(sender == NULL || receiver == NULL)
            {
                cout << "Invalid account!" << endl;
            }
            else
            {
                cout << "Enter amount: ";
                cin >> amount;

                sender->transfer(*receiver, amount);
            }
        }

        else if(ch == 4)
        {
            cout << "Total accounts: " << bank::getTotal() << endl;
        }

    } while(ch != 0);

    delete[] b;

    return 0;
}
