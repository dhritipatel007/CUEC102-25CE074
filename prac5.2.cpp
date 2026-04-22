#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream file("First.txt");
    string str;
    file.open("first.txt");
    getline(file, str);
    cout<<"String: "<<str;

    file.close();
}
