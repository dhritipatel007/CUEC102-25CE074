#include<iostream>
using namespace std;

class person
{
protected:
    int age;
    string name;

public:
    person(int a = 0, string n = "default")
    {
        age = a;
        name = n;
    }

    void getdata()
    {
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
    }
};

class employee : public person
{
protected:
    int id;

public:
    employee(int a = 0, string n = "default", int i = 0)
        : person(a, n)
    {
        id = i;
    }

    void egetdata()
    {
        cout << "Enter employee id: ";
        cin >> id;
    }
};

class manager : public employee
{
    string dept;

public:
    manager(int a = 0, string n = "default", int i = 0, string d = "default")
        : employee(a, n, i)
    {
        dept = d;
    }

    void mgetdata()
    {
        cout << "Enter department name: ";
        cin >> dept;
    }

    void display()
    {
        cout << "\n--- Manager Details ---\n";
        cout << "Age: " << age << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Department: " << dept << endl;
    }
};

int main()
{
    manager obj[10];
    int n, i;

    cout << "Enter number of managers: ";
    cin >> n;

    for(i = 0; i < n; i++)
    {
        cout << "\nManager " << i+1 << endl;
        obj[i].getdata();
        obj[i].egetdata();
        obj[i].mgetdata();
    }

    cout << "\n------------------------------\n";

    for(i = 0; i < n; i++)
    {
        obj[i].display();
    }

    return 0;
}
