#include<iostream>
using namespace std;

class Account
{
protected:
    int accNo;
    float balance;

public:
    void getdata()
    {
        cout << "Enter account number: ";
        cin >> accNo;
        cout << "Enter balance: ";
        cin >> balance;
    }

    void deposit(float amt)
    {
        balance += amt;
    }

    void withdraw(float amt)
    {
        if(balance >= amt)
            balance -= amt;
        else
            cout << "Insufficient balance!\n";
    }

    void display()
    {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

class Savings : public Account
{
    float interest;

public:
    void getSavings()
    {
        cout << "Enter interest rate: ";
        cin >> interest;
    }

    void display()
    {
        Account::display();
        cout << "Interest Rate: " << interest << endl;
    }
};

class Current : public Account
{
public:
    void display()
    {
        Account::display();
    }
};

int main()
{
    Savings s[5];
    Current c[5];

    int n, i;

    cout << "Enter number of savings accounts: ";
    cin >> n;

    for(i = 0; i < n; i++)
    {
        cout << "\nSavings Account " << i+1 << endl;
        s[i].getdata();
        s[i].getSavings();
    }

    cout << "\nSAVING ACC\n";
    for(i = 0; i < n; i++)
    {
        s[i].display();
        cout << "------------------\n";
    }

    cout << "\nEnter number of current accounts: ";
    cin >> n;

    for(i = 0; i < n; i++)
    {
        cout << "\nCurrent Account " << i+1 << endl;
        c[i].getdata();
    }

    cout << "\nCURRENT ACC\n";
    for(i = 0; i < n; i++)
    {
        c[i].display();
        cout << "------------------\n";
    }

    return 0;
}
