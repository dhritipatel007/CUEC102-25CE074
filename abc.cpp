#include<iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    int m[3];
    int avrg;

public:
    Student()
    {
        roll = 0;
        name = "Default";
        m[0] = 0;
        m[1] = 0;
        m[2] = 0;
    }

    void getdata()
    {
        int i;
        cout<<"\nEnter roll no: ";
        cin>>roll;
        cout<<"Enter name: ";
        cin.ignore();
        getline(cin, name);
        for(i=0; i<3; i++)
        {
            cout<<"Enter marks for subject "<<i+1<<": ";
            cin>>m[i];
        }
    }

    void average()
    {
        int i, total=0;
        for(i=0; i<3; i++)
        {
            total = total+m[i];
        }
        avrg = total/3;
        cout<<"Average of 3 subject is: "<<avrg<<endl;
    }

    void display()
    {
        cout<<"Roll no: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Average: "<<avrg<<endl<<endl;
    }
};


int main()
{
    Student s[100];
    int i, n, count=0;
    cout<<"Enter no. of students: ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        s[i].getdata();
        s[i].average();
        count++;
    }

    for(i=0; i<count; i++)
    {
       cout<<"\nStudent "<<i+1<<endl;
       s[i].display();
    }
}
