#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main()
{
    int n,x;

    set<int> s;

    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }

    cout<<"\nUnique elements (sorted): ";
    set<int>::iterator it;
    for(it = s.begin(); it != s.end(); it++)
    {
        cout<<*it<<" ";
    }

    vector<int> v;

    for(it = s.begin(); it != s.end(); it++)
    {
        v.push_back(*it);
    }

    cout<<"\n\nElements in vector: ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
