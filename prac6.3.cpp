#include<iostream>
using namespace std;

class Fuel
{
protected:
    string fuelType;

public:
    Fuel(string f = "default")
    {
        fuelType = f;
    }

    void getFuel()
    {
        cout << "Enter fuel type: ";
        cin >> fuelType;
    }
};

class Brand
{
protected:
    string brandName;

public:
    Brand(string b = "default")
    {
        brandName = b;
    }

    void getBrand()
    {
        cout << "Enter brand name: ";
        cin >> brandName;
    }
};

class Car : public Fuel, public Brand
{
public:
    Car(string f="default", string b="default") : Fuel(f), Brand(b) {}

    void display()
    {
        cout << "Brand: " << brandName << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "----------------------\n";
    }
};

int main()
{
    int n, i, choice;

    cout << "Enter number of cars: ";
    cin >> n;

    cout << "\n1. Static Method\n2. Dynamic Method\nEnter choice: ";
    cin >> choice;

    if(choice == 1)
    {
        Car c[10];

        if(n > 10)
        {
            cout << "Limit exceeded!" << endl;
            return 0;
        }

        for(i = 0; i < n; i++)
        {
            cout << "\nCar " << i+1 << endl;
            c[i].getBrand();
            c[i].getFuel();
        }

        cout << "\n--------------\n";
        for(i = 0; i < n; i++)
        {
            c[i].display();
        }
    }

    else if(choice == 2)
    {
        Car *c = new Car[n];

        for(i = 0; i < n; i++)
        {
            cout << "\nCar " << i+1 << endl;
            c[i].getBrand();
            c[i].getFuel();
        }

        cout << "\n----------------\n";
        for(i = 0; i < n; i++)
        {
            c[i].display();
        }

        delete[] c;
    }

    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
