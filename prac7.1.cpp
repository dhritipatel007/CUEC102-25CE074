#include<iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    float add(float a, float b)
    {
        return a + b;
    }

    float add(int a, float b)
    {
        return a + b;
    }

    void display(float result)
    {
        cout << "Result: " << result << endl;
    }
};

int main()
{
    Calculator c;

    c.display(c.add(5, 10));
    c.display(c.add(5, 10, 15));
    c.display(c.add(3.5f, 7.3f));
    c.display(c.add(6, 8.4f));

    return 0;
}
