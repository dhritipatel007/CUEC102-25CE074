#include<iostream>
using namespace std;

class employee
{
    string name;
    int salary;
    int bonus;

public:
    employee (string c_name, int c_salary, int c_bonus = 2000)
    {
        name = c_name;
        salary = c_salary;
        bonus = c_bonus;
    }

    inline int total()
    {
        return salary + bonus;
    }

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Basic salary: "<<salary<<endl;
        cout<<"Bonus: "<<bonus<<endl;
        cout<<"Total salary: "<<total()<<endl;
        cout<<"---------------------------------"<<endl;
    }

};

int main()
{
    int n, esalary, ebonus, ch, i;
    string ename;
    cout<<"Enter number of employee: ";
    cin>>n;
    employee* arr[n];

    for(i=0; i<n; i++)
    {
        cout<<"\nDetails of employee "<<i+1<<endl;
        cout<<"Enter name: ";
        cin.ignore();
        getline(cin, ename);
        cout<<"Enter basic salary: ";
        cin>>esalary;
        cout<<"1. Default bonus"<<endl;
        cout<<"2. Custom bonus"<<endl;
        cin>>ch;
        if(ch==1)
        {
                arr[i] = new employee(ename, esalary);
        }
        else if(ch==2)
        {
            cout<<"Enter custom bonus: ";
            cin>>ebonus;
            arr[i] = new employee(ename, esalary, ebonus);
        }
    }

    cout<<endl<<endl;
    for(i=0; i<n; i++)
    {
        arr[i] -> display();
    }
}
