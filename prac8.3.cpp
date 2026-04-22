#include<iostream>
using namespace std;

class BankAccount
{
    float balance;

public:
    BankAccount()
    {
        balance = 0;
    }

    void deposit(float amt, string log[], int &i)
    {
        log[i++] = "Enter deposit()";

        if(amt <= 0)
        {
            log[i++] = "Invalid deposit amount";
            throw amt;
        }

        balance = balance + amt;
        log[i++] = "Deposit successful";

        log[i++] = "Exit deposit()";
    }

    void withdraw(float amt, string log[], int &i)
    {
        log[i++] = "Enter withdraw()";

        if(amt > balance)
        {
            log[i++] = "Insufficient balance";
            throw amt;
        }

        balance = balance - amt;
        log[i++] = "Withdraw successful";

        log[i++] = "Exit withdraw()";
    }

    void process(float d, float w, string log[], int &i)
    {
        log[i++] = "Enter process()";

        deposit(d, log, i);
        withdraw(w, log, i);

        log[i++] = "Exit process()";
    }

    void show()
    {
        cout<<"Final Balance = "<<balance<<endl;
    }
};

int main()
{
    BankAccount b;
    float d,w;

    string log[50];
    int i=0;

    try
    {
        log[i++] = "Enter main()";

        cout<<"Enter deposit amount: ";
        cin>>d;

        cout<<"Enter withdraw amount: ";
        cin>>w;

        b.process(d,w,log,i);

        log[i++] = "Exit main()";
    }
    catch(float)
    {
        log[i++] = "Exception caught in main()";
        cout<<"Error: Transaction failed"<<endl;
    }

    cout<<"\n--- Transaction Log ---\n";
    for(int j=0;j<i;j++)
    {
        cout<<log[j]<<endl;
    }

    b.show();

    return 0;
}
