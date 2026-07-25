#include<iostream>
using namespace std;

int main()
{
    int m = 10;
    int &r = m;
    cout<<"The value of r is: "<<r<<endl;
    r = 20;
    cout<<"The value of r is: "<<r<<endl;
    cout<<"The value of m is: "<<m<<endl;
    cout<<"The address of r is: "<<&r<<endl;
    cout<<"The address of m is: "<<&m<<endl;
}
