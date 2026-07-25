#include<iostream>
#include<string.h>
using namespace std;

class library
{
    string title;
    string author;
    int year;
    int status;

public:
    void getdata()
    {
        cout<<"Enter title: ";
        cin.ignore();
        getline(cin, title);
        cout<<"Enter author: ";
        cin.ignore();
        getline(cin, author);
        cout<<"Enter year of publication: ";
        cin>>year;
        cout<<"Enter availability status: ";
        cin>>status;
    }

    string getstring()
    {
        return title;
    }

    void issue()
    {
        status--;
    }

    void returned()
    {
        status++;
    }

    void display()
    {
        cout<<"Book title: "<<title<<endl;
        cout<<"Author name: "<<author<<endl;
        cout<<"Year of publication: "<<year<<endl;
        cout<<"Availability status: "<<status<<endl;
    }
};


int main()
{
    library book[10];
    int ch,i, count=0;
    string s1;
    do
    {
        cout<<"\nEnter choice: ";
        cin>>ch;
        int flag=0;
        switch(ch)
        {
        case 1:
            for(i=0; i<1; i++)
            {
                book[i].getdata();
                count++;
            }
            break;

        case 2:
            for(i=0; i<count; i++)
            {
                cout<<"Enter book name: ";
                cin.ignore();
                getline(cin, s1);
                if(s1==book[i].getstring())
                {
                    book[i].issue();
                    cout<<"Issued!\n";
                    flag=1;
                }
            }
            if(!flag)
            {
                cout<<"Book not found!\n";
            }
            break;

        case 3:
            for(i=0; i<count; i++)
            {
                cout<<"Enter book name: ";
                cin.ignore();
                getline(cin, s1);
                if(s1==book[i].getstring())
                {
                    book[i].returned();
                    cout<<"Returned!\n";
                    flag=1;
                }
            }
            if(!flag)
            {
                cout<<"Book not found!\n";
            }
            break;

        case 4:
            for(i=0; i<count; i++)
            {
                cout<<"Enter book name: ";
                cin.ignore();
                getline(cin, s1);
                if(s1==book[i].getstring())
                {
                    book[i].display();
                    flag=1;
                }
            }
            if(!flag)
            {
                cout<<"Book not found!\n";
            }
            break;

        default:
            cout<<"Enter valid choice!\n";
        }
    }
    while(ch!=0);
}
