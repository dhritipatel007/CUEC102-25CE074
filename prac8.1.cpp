#include <iostream>
using namespace std;

int main()
{
    try
    {
        int a, b;

        cout << "Enter numerator: ";
        if (!(cin >> a))
            throw "Invalid input for numerator!";

        cout << "Enter denominator: ";
        if (!(cin >> b))
            throw "Invalid input for denominator!";

        if (b == 0)
            throw 0;

        cout << "Result = " << (a / b) << endl;
    }
    catch (const char* msg)
    {
        cout << "Error: " << msg << endl;
    }
    catch (int)
    {
        cout << "Error: Division by zero is not allowed!" << endl;
    }

    return 0;
}
