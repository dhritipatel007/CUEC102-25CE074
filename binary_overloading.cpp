#include<iostream>
using namespace std;

class str
{
    string str1, str2;
public:
    void getdata(string s1, string s2)
    {
        str1=s1;
        str2=s2;
    }

    str operator+(str s)
    {
        str temp;
        temp.str1=str1+s.str1;
        temp.str2=str2+s.str2;
        return temp;
    }

    void display()
    {
        cout<<str1<<" "<<str2<<endl;
    }
};

int main()
{
    str c1, c2, c3;
    c1.getdata("My life is fucked up", "You listenin?");
    c2.getdata("Do you care?", "i gotta go");
    c3=c1+c2;
    c3.display();
}
