#include<iostream>
using namespace std;

class Fahrenheit;

class Celsius
{
protected:
    float temp;

public:
    Celsius() { temp = 0; }
    Celsius(float a) { temp = a; }

    void setTemp(float a)
    {
        temp = a;
    }

    float getTemp()
    {
        return temp;
    }

    operator Fahrenheit();

    void display()
    {
        cout << temp << " C" << endl;
    }

    bool operator==(Fahrenheit f);
};

class Fahrenheit
{
protected:
    float temp;

public:
    Fahrenheit() { temp = 0; }
    Fahrenheit(float a) { temp = a; }

    float getTemp()
    {
        return temp;
    }

    operator Celsius()
    {
        return Celsius((temp - 32) * 5 / 9);
    }

    void display()
    {
        cout << temp << " F" << endl;
    }
};

Celsius::operator Fahrenheit()
{
    return Fahrenheit((temp * 9 / 5) + 32);
}

bool Celsius::operator==(Fahrenheit f)
{
    Celsius c2 = f;
    return temp == c2.getTemp();
}

int main()
{
    Celsius arr[3] = {25, 35, 45};

    cout << "Array Conversion:\n";

    for(int i = 0; i < 3; i++)
    {
        Fahrenheit f = arr[i];
        f.display();
    }

    return 0;
}
