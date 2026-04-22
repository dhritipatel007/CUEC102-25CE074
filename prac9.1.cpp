#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int n,x;

    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }

    vector<int> v1 = v;
    reverse(v1.begin(), v1.end());

    cout<<"\nReversed using std::reverse(): ";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }

    vector<int> v2 = v;

    vector<int>::iterator start = v2.begin();
    vector<int>::iterator end = v2.end() - 1;

    while(start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    cout<<"\nReversed manually using iterators: ";
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }

    return 0;
}
