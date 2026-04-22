#include<iostream>
using namespace std;
class shape
{
public:
   virtual float area()
    {

    }


};
class rectangle:public shape
{
private:
    float l,b;
public:
    rectangle(float a,float c)
    {
        l=a;
        b=c;
    }
    float area()
    {
        cout<<"Area of rectangle is: ";
        return l*b;
    }


};
class circle:public shape
{
private:
    float r;
public:
    circle(float a)
    {
        r=a;
    }
     float area()
     {
         cout<<"Area of circle is: ";
         return 3.14*r*r;
     }
};
int main()
{
    float a,b,c;

    shape*s[2];

    cout<<"Enter length and breadth of rectangle: ";
    cin>>a>>b;
    cout<<"Enter the radius of circle: ";
    cin>>c;
    s[0] = new rectangle(a, b);
    s[1] = new circle(c);

     cout << "Area: " << s[0]->area() << endl;
      cout << "Area: " << s[1]->area() << endl;
    return 0;
}
