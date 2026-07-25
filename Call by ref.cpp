#include<iostream>
using namespace std;

void alternative(int &);

int main()
{
    int m =10;
    cout<<"The value of m is: "<<m<<endl;
    alternative(m);
    cout<<"The value of m is: "<<m<<endl;
}

void alternative(int & r)
{
    r=20;
    cout<<"The value of r is: "<<r<<endl;
}
