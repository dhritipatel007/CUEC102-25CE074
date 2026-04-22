#include<iostream>
using namespace std;

int main()
{
    string str;
    //string* ptr = &str;
    char arr[20];
    int i, countt=0;
    cout<<"Enter the string: ";
    getline(cin, str);

    for(i=0; str[i]!='\0'; i++)
    {
        countt++;
    }

    for(i=0; i<countt; i++)
    {
        arr[i] = str[i];
        //ptr++;
    }

    for(i=0; i<countt; i++)
    {
        if(arr[i]>=97 && arr[i]<=122)
        {
            arr[i] = arr[i]-32;
        }
    }

    cout<<"\n---------------------------------\n";
    for(i=0; i<countt; i++)
    {
        cout<<arr[i];
    }
    arr[countt+1]='\0';
    cout<<endl;
}
