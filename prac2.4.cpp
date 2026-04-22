#include<iostream>
using namespace std;

class Shop
{
private:
    int id;
    string name;
    int price;
    int quantity;

public:
    Shop()
    {
        id=0;
        name="Default";
        price=0;
        quantity=0;
    }

    Shop(int t_id, string t_name, int t_price, int t_quantity)
    {
        id = t_id;
        name = t_name;
        price = t_price;
        quantity = t_quantity;
    }
    void display();

};


void Shop::display()
{
    cout<<"\nProduct id: "<<id<<endl;
    cout<<"Product name: "<<name<<endl;
    cout<<"Product price: "<<price<<endl;
    cout<<"Quantity available: "<<quantity<<endl;
}

int main()
{
    int ch, i, flag=0;
    Shop p[10];
    int t_id, t_price, t_quantity;
    string t_name;
    p[0] = Shop(1, "Milk", 35, 5);
    do
    {
        cout<<"\n1. Enter product details\n2. Decrease stock\n3. Increase stock\n4. Validating stock\n5. Display\n0. Exit\n";
        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            for(i=1; i<2; i++);
            {
                cout<<"\nEnter product id: ";
                cin>>t_id;
                cout<<"Enter product name: ";
                cin.ignore();
                getline(cin, t_name);
                cout<<"Enter product price: ";
                cin>>t_price;
                cout<<"Enter available quantity: ";
                cin>>t_quantity;
                p[i] = Shop(t_id, t_name, t_price, t_quantity);
                break;
            }


        case 5:
            for(i=0; i<=6; i++)
            {
                p[i].display();
            }
            break;
        }
    }
    while(ch!=0);
}
