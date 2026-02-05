#include<iostream>
using namespace std;

class shape
{
private:
    int no, l, b, a, p;

public:
    void input()
    {
        cout<<"Enter rectangle number: ";
        cin>>no;
        cout<<"Enter length: ";
        cin>>l;
        cout<<"Enter breadth: ";
        cin>>b;
    }

    void area()
    {
        a = l*b;
        cout<<"Area of rectangle "<<no<<": "<<a<<endl;
    }

    void perimeter()
    {
        p = 2*(l+b);
        cout<<"Perimeter of rectangle "<<no<<": "<<p<<endl;
    }

    void display()
    {
        cout<<"Area of rectangle "<<no<<": "<<a<<endl;
        cout<<"Perimeter of rectangle "<<no<<": "<<p<<endl<<endl;
    }

    int get_no()
    {
        return no;
    }
};


int main()
{
    shape r[10];
    int ch, i, count=0, n1, n;
    cout<<"1.Input\n2.Area\n3.Perimeter\n4.Display\n5.Update\n6.Exit\n";
x:
    cout<<"\nEnter choice: ";
    cin>>ch;

    switch(ch)
    {
    case 1:
        for(i=0; i<1; i++)
        {
        r[i].input();
        count++;
        }
        goto x;

    case 2:
        for(i=0; i<count; i++)
        {
            r[i].area();
        }
        goto x;

    case 3:
        for(i=0; i<count; i++)
        {
            r[i].perimeter();
        }
        goto x;

    case 4:
        for(i=0; i<count; i++)
        {
            r[i].display();
        }
        goto x;

    case 5:
        cout<<"Enter the rectangle number you want to update: ";
        cin>>n1;
        for(i=0; i<count; i++)
        {
            if(n1==r[i].get_no())
            {
                r[i].input();
                cout<<"Updated!\n";
            }
        }
        goto x;

    case 6:
        cout<<"Exiting...\n";
        break;

    default:
        cout<<"Enter valid choice!\n";
            goto x;

    }

}
