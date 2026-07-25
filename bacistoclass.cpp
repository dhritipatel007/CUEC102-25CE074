#include<iostream>
using namespace std;

class money
{
    int r,p;
public:
    money() {}

    money(int m1)
    {
        r=m1/100;
        p=m1%100;
    }

    void display()
    {
        cout<<"rupee: "<<r<<endl<<"paisa: "<<p<<endl;
    }
};

int main()
{
    money m;
    int amt=115;
    m=115;
    m.display();
}
