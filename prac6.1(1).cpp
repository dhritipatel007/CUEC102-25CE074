#include<iostream>
using namespace std;

class shape
{
protected:
    int radius;

public:
    void getdata()
    {
        cout<<"Enter the radius: ";
        cin>>radius;
    }
};

class circle : public shape
{
    float area;

public:
    void calc()
    {
        area = 3.14*radius*radius;
    }

    void display()
    {
        cout<<"Area: "<<area<<endl;
    }
};

int main()
{
    circle *ptr;
    int n, i;
    cout<<"Enter the no. of shapes: ";
    cin>>n;
    ptr = new circle[n];
    cout<<"\n";
    for(i=0; i<n; i++)
    {
        ptr[i].getdata();
    }
    cout<<"---------------------------\n";
    for(i=0; i<n; i++)
    {
        ptr[i].calc();
        ptr[i].display();
    }

    delete[] ptr;
}
