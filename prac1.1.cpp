#include<iostream>
using namespace std;

class Wallet
{
private:
    int walletID;
    string userName;
    float balance;

public:

    Wallet(int id, string name, float bal = 0)
    {
        walletID = id;
        userName = name;
        balance = bal;
    }

    void loadMoney(float amount)
    {
        if(amount > 0)
        {
            balance += amount;
            cout << "Money loaded successfully\n";
        }
        else
        {
            cout << "Invalid amount\n";
        }
    }

    void transferMoney(Wallet &receiver, float amount)
    {
        if(amount <= 0)
        {
            cout << "Invalid amount\n";
        }
        else if(amount > balance)
        {
            cout << "Error: Insufficient balance\n";
        }
        else
        {
            balance -= amount;
            receiver.balance += amount;
            cout << "Transfer successful\n";
        }
    }

    void display()
    {
        cout << "\nWallet ID: " << walletID;
        cout << "\nUser Name: " << userName;
        cout << "\nBalance: " << balance << endl;
    }
};

int main()
{
    Wallet w1(101, "Riya", 1000);
    Wallet w2(102, "Siya", 500);

    w1.display();
    w2.display();

    w1.loadMoney(500);

    w1.transferMoney(w2, 1200);
    w1.transferMoney(w2, 300);

    w1.display();
    w2.display();

    return 0;
}
