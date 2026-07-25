#include<cmath>
#include<iostream>
using namespace std;

double power(double n, int p=2);

int main()
{
    int n,p;
    cin>>n>>p;
    if(p!=2)
    {
           cout<<power(n,p);
    }
}

double power(double n, int p)
{
    return pow(n,2);
}
