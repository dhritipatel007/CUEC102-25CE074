#include<iostream>
#include<cmath>
using namespace std;

class NegativeNumberException
{
public:
    void show()
    {
        cout<<"Error: Negative number not allowed";
    }
};

int main()
{
    float num;

    try
    {
        cout<<"Enter a number: ";
        cin>>num;

        if(num < 0)
        {
            throw NegativeNumberException();
        }

        cout<<"Square root = "<<sqrt(num);
    }
    catch(NegativeNumberException e)
    {
        e.show();
    }

    return 0;
}
