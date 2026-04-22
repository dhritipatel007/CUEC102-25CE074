#include<iostream>
using namespace std;
class DynamicArray {
private:
    int* arr;
    int s;

public:

    DynamicArray() {
        arr = '\0';
        s = 0;
    }
     void insert(int value) {
        int* ptr = new int[s + 1];


        for (int i = 0; i < s; i++) {
            ptr[i] = arr[i];
        }


        ptr[s] = value;

        delete[] arr;


        arr = ptr;
        s++;
    }

    void remove(int position) {
        if (position < 0 || position >= s) {
            cout << "Invalid position!" << endl;
        }

        int* ptr = new int[s - 1];

        for (int i = 0, j = 0; i < s; i++) {
            if (i != position) {
                ptr[j++] = arr[i];
            }
        }

        delete[] arr;
           arr = ptr;
        s--;
    }


    void display() {
        if (s == 0) {
            cout << "Array is empty" << endl;
            return;
        }
  cout << "Array elements: ";
        for (int i = 0; i < s; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


    ~DynamicArray() {
        delete[] arr;
    }
    };

int main() {
    DynamicArray da;
    int choice, value, position;

    do {
        cout << "\n Menu\n";
        cout << "1. Insert\n2. Delete\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
         switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                da.insert(value);
                break;

            case 2:
                cout << "Enter position: ";
                cin >> position;
                da.remove(position);
                break;

            case 3:
                da.display();
                break;

            case 4:

                break;
                    default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}

