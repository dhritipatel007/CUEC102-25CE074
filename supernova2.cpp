#include<iostream>
using namespace std;

int main()
{
    int a,b, i;
    //int min=a>b?b:a;
    int maxm=0;
    cin>>a>>b;
    for(i=1; i<=a; i++)
    {
            if(a%i==0 && b%i==0)
            {
                if(i>maxm)
                    maxm=i;
            }
    }
    cout<<maxm<<endl;

    cout<<(a*b)/maxm;
}
