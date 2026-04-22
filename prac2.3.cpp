#include<iostream>
using namespace std;

class Bank
{
private:
    string name;
    int id;
    int cur_bal;
    int w;
    int d;

public:

    Bank()
    {
        name = "Default";
        id = 0;
        cur_bal = 0;
    }

    void getdata()
    {
        cout<<"\nEnter customer name: ";
        cin.ignore();
        getline(cin, name);
        cout<<"Enter customer ID: ";
        cin>>id;
        cout<<"Enter current balance: ";
        cin>>cur_bal;
    }

    void withdraw()
    {
        int ID, flag=0;
        cout<<"\nEnter ID: ";
        cin>>ID;
        if(ID == id)
        {
            cout<<"Enter the amt you want to withdraw: ";
            cin>>w;
            if(cur_bal >= w)
            {
                cur_bal = cur_bal - w;
                cout<<"Current balance: "<<cur_bal<<endl;
            }
            else
            {
                cout<<"Insufficient balance!\n";
                flag=1;
            }
        }
        if(!flag)
        {
            cout<<"Sorry, the ID does not exist\n";
        }
    }

    void deposit()
    {
        int ID;
        cout<<"\nEnter ID: ";
        cin>>ID;
        if(ID == id)
        {
            cout<<"Enter the amt you want to withdraw: ";
            cin>>d;
            cur_bal = cur_bal + d;
            cout<<"Current balance: "<<cur_bal<<endl;
        }
        else
        {
            cout<<"Sorry, the ID does not exist\n";
        }
    }

    void display()
    {
        int ID;
        cout<<"\nEnter ID: ";
        cin>>ID;
        if(ID == id)
        {
            cout<<"\nACCOUNT SUMMARY:\n";
            cout<<"Name: "<<name<<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Current balance: "<<cur_bal<<endl;
        }
        else
        {
            cout<<"Sorry, the ID does not exist\n";
        }
    }
};


int main()
{
    Bank b[10];
    int i, ch, count=0;
x:
    cout<<"\n1. Create account\n2. Withdraw\n3. Deposit\n4. Display\n0. Exit\n";
    cout<<"Enter choice: ";
    cin>>ch;
    switch(ch)
    {
    case 1:
        for(i=0; i<1; i++)
        {
            b[i].getdata();
            count++;
        }
        goto x;

    case 2:
        for(i=0; i<count; i++)
        {
            b[i].withdraw();
        }
        goto x;

    case 3:
        for(i=0; i<count; i++)
        {
            b[i].deposit();
        }
        goto x;

    case 4:
        for(i=0; i<count; i++)
        {
            b[i].display();
        }
        goto x;

    case 0:
        cout<<"Exiting...";
        break;

    default:
        cout<<"Enter valid choice!\n";
        goto x;
    }
}
