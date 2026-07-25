#include<iostream>
using namespace std;

class hospital
{
    int rollno;
    string name;
public:
    void getdata()
    {
        cout<<"Enter roll no: ";
        cin>>rollno;
        cout<<"Enter name: ";
        cin.ignore();
        getline(cin, name);
    }

    void display()
    {
        cout<<"Roll no: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
    }
};


class ward : virtual public hospital
{
    int wardno;
public:
    void wgetdata()
    {
        cout<<"Enter ward no: ";
        cin>>wardno;
    }

    void wdisplay()
    {
        cout<<"Ward no: "<<wardno<<endl;
    }
};


class room : virtual public hospital
{
    int bedno;
    string illness;
public:
    void rgetdata()
    {
        cout<<"Enter bed no: ";
        cin>>bedno;
        cout<<"Enter type of illness: ";
        cin.ignore();
        getline(cin, illness);
    }

    void rdisplay()
    {
        cout<<"Bed no: "<<bedno<<endl;
        cout<<"Type of illness: "<<illness<<endl;
    }
};


class patient : public ward, public room
{
};


int main()
{
    patient obj[5];
    int i;
    for(i=0; i<2; i++)
    {
        cout<<endl;
        obj[i].getdata();
        obj[i].wgetdata();
        obj[i].rgetdata();
    }
    for(i=0; i<2; i++)
    {
        cout<<endl;
        obj[i].display();
        obj[i].wdisplay();
        obj[i].rdisplay();
    }
}
