#include<iostream>
using namespace std;
class point
{
private:
    int x,y;
public:
     point()
    {
        x=0;
        y=0;
    }
   void setdata(int a,int b)
    {
        x=a;
        y=b;
    }
   point& move(int dx, int dy)
    {
        x=x+dx;
        y=y+dy;
        return *this;

    }

   void display()
    {
    cout << "Current coordinates: (" << x << ", " << y << ")\n";
    }
};
  void updatePoint(point* p2)
    {
       p2->move(10, 10);
    }
int main()
{
    int x,y;
    point p1,p2;
    cout<<"set the initial points: ";
    cin>>x>>y;
    p1.setdata(x,y);
    cout<<"enter the coordinates to be moved: ";
    cin>>x>>y;
    p1.move(x,y);
    p1.display();

    cout<<"\nfor chainable\n";
    p2.setdata(5,5);
    p2.move(2,3).move(-1,4);
    p2.display();

    cout << "\npass by reference using pointer\n";
    updatePoint(&p2);
    p2.display();

    return 0;
}
