#include<iostream>
using namespace std;

class library
{
    int id;
    string title;
    string author;
    int copies;

public:
    void add()
    {
        cout<<"\nEnter book ID: ";
        cin>>id;
        cout<<"Enter book title: ";
        cin.ignore();
        getline(cin, title);
        cout<<"Enter author name: ";
        cin.ignore();
        getline(cin, author);
        cout<<"Enter no. of copies available: ";
        cin>>copies;
    }
    void issue()
    {
        --copies;
    }
    void return_book()
    {
        copies++;
    }
    void display()
    {
        cout<<"\nBook ID: "<<id<<endl;
        cout<<"Book title: "<<title<<endl;
        cout<<"Book author: "<<author<<endl;
        cout<<"No. of copies: "<<copies<<endl;
    }
    int get_id()
    {
        return id;
    }

};

int main()
{
    library b[10];
    int ch, i, n, flag=0, ID, found;
    cout<<"1. Add new book \n2. Issue book \n3. Return book \n4. Display total books \n5.exit"<<endl;
X:
    cout<<"\nEnter choice: ";
    cin>>ch;

    switch(ch)
    {
    case 1:
        cout<<"Enter the no. of books: ";
        cin>>n;
        for(i=0; i<n; i++)
        {
            b[i].add();
            flag++;
        }
        goto X;

    case 2:
        cout<<"Enter the id: ";
        cin>>ID;
        found=0;
        for(i=0; i<flag; i++)
        {
            if(ID==b[i].get_id())
            {
                b[i].issue();
                cout<<"Issued!\n";
                found=1;
            }
        }
        if(!found)
        {
            cout<<"Id not found!"<<endl;
        }
        goto X;

    case 3:
        cout<<"Enter the id: ";
        cin>>ID;
        found=0;
        for(i=0; i<flag; i++)
        {
            if(ID == b[i].get_id())
            {
                b[i].return_book();
                cout<<"Returned!\n";
                found=1;
            }
        }
        if(!found)
        {
            cout<<"No record found!\n";
        }
        goto X;

    case 4:
        for(i=0; i<flag; i++)
        {
            b[i].display();
        }
        goto X;

    case 5:
        cout<<"Exiting...\n";
        break;

    default:
        cout<<"Enter valid choice!\n";
        goto X;
    }

}

