#include<iostream>
using namespace std;

class num
{
    int a,b;

public:
    num()
    {
    }

    num(int x, int y)
    {
        a=x;
        b=y;
    }

    void getdata()
    {
        cin>>a>>b;
    }

    num operator-(num n)
    {
        num temp;
        temp.a=a-n.a;
        temp.b=b-n.b;
        return temp;
    }

    int operator==(num n)
    {
        if(n.a==a && n.b==b)
        {
            return 1;
        }
        else
            return 0;
    }

    void display()
    {
        cout<<a<<endl<<b<<endl;
    }
};


int main()
{
    num c1(3,4), c2(5,6), c3;
    c1.getdata();
    c2.getdata();
    c3=c2-c1;                      \\c3=c2.add(c1)
    c3.display();
    if(c2==c1)
    {
        cout<<"success!\n";
    }
    else
    {
        cout<<"Fail!\n";
    }
}
