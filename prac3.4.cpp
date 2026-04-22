#include<iostream>
using namespace std;

// Display array
template <class T>
void display(T arr[], int n)
{
    cout << "Array elements: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Find maximum
template <class T>
T findMax(T arr[], int n)
{
    T max = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

// Reverse array
template <class T>
void reverseArr(T arr[], int n)
{
    for(int i = 0; i < n/2; i++)
    {
        T temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main()
{
    int choice, n;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "\nSelect data type:\n1. Integer\n2. Float\n3. Character\nChoice: ";
    cin >> choice;

    if(choice == 1)
    {
        int arr[50];

        cout << "Enter elements:\n";
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        display(arr, n);

        cout << "Maximum: " << findMax(arr, n) << endl;

        reverseArr(arr, n);
        cout << "Reversed ";
        display(arr, n);
    }

    else if(choice == 2)
    {
        float arr[50];

        cout << "Enter elements:\n";
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        display(arr, n);

        cout << "Maximum: " << findMax(arr, n) << endl;

        reverseArr(arr, n);
        cout << "Reversed ";
        display(arr, n);
    }

    else if(choice == 3)
    {
        char arr[50];

        cout << "Enter characters:\n";
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        display(arr, n);

        cout << "Maximum: " << findMax(arr, n) << endl;

        reverseArr(arr, n);
        cout << "Reversed ";
        display(arr, n);
    }

    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
