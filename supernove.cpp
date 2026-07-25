#include<iostream>
using namespace std;

int main()
{
    char s[100];
    int i, l=0;
    cin>>s;
    for(i=0; s[i]!='\0'; i++)
    {
        l++;
    }
    for(i=0; i<l; i++)
    {
        if(s[i]<=65 && s[i]>=91)
        {
            s[i]=s[i]+32;
        }
        else if(s[i]>=97 && s[i]<=123)
        {
            s[i]=s[i]-32;
        }
    }
    for(i=0; i<l; i++)
    {
        cout<<s[i];
    }
}
