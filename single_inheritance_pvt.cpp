#include<iostream>
using namespace std;

class A
{
    int a;
public:
    int b;
    void getdata()
    {
        cout<<"Enter a: ";
        cin>>a;
        cout<<"Enter b: ";
        cin>>b;
    }

    int get_a()
    {
        return a;
    }

    void display_ab()
    {
        cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
    }
};

class B : public A
{
    int c;
public:
    void mul()
    {
        c=get_a()*b;
    }
    void display()
    {
        cout<<"ANS: "<<c<<endl;
    }
};

int main()
{
    B obj;
    obj.getdata();
    obj.display_ab();
    obj.mul();
    obj.display();
}
