#include<iostream>
#include<math.h>
using namespace std;

class Bank
{
private:
    int id;
    string name;
    double amt;
    int rate;
    int months;

public:
    Bank()
    {
        id=0;
        name="default";
        amt=0;
        rate=0;
        months=0;
    }

    Bank(int t_id, string t_name, double t_amt, int t_rate, int t_months)
    {
        id = t_id;
        name = t_name;
        amt = t_amt;
        rate = t_rate;
        months = t_months;
    }

    void calculate()
    {
        double EMI;
        int r;
        r = rate/12;
        EMI = (amt*r*pow(1+r, months))/(pow(1+r, months) - 1);
        cout<<"EMI = "<<EMI<<endl;
    }
};

int main()
{
    Bank b[10];
    int t_id, t_rate, t_months, i, ch, flag=0, ID;
    double t_amt;
    string t_name;
    bool found;
    b[0] = Bank(1, "Nidhi", 50000, 5, 6);
    do
    {
        cout<<"\nEnter choice: ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"\nEnter id: ";
            cin>>t_id;
            cout<<"Enter name: ";
            cin.ignore();
            getline(cin, t_name);
            cout<<"Enter total loan amout: ";
            cin>>t_amt;
            cout<<"Enter interest rate: ";
            cin>>t_rate;
            cout<<"Enter loan tenure: ";
            cin>>t_months;
            flag++;
            b[flag] = Bank(t_id, t_name, t_amt, t_rate, t_months);
            break;

        case 2:
            for(i=0; i<flag; i++)
            {
                cout<<"Enter id: ";
                cin>>ID;
                if(ID == t_id)
                {
                    b[i].calculate();
                    found=true;
                }
            }
            if(!found)
            {
                cout<<"ID not found!\n";
            }
            break;
        }
    }
    while(ch!=0);
}
