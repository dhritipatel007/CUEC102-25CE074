#include<iostream>
using namespace std;
int main()
{
    int m,n,i=0,j=0,k=0,l=0,MAX=0;
    cout<<"Enter the size of first array: ";
    cin>>m;
    cout<<"Enter the size of second array: ";
    cin>>n;
    int* arr1 = new int[m];
    int* arr2 = new int[n];
   cout << "Enter elements of first sorted array: ";
    for ( i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
     cout << "Enter elements of second sorted array: ";
    for ( i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
     int* merged = new int[n + m];

    while(l < m && j < n)
     {
         if(arr1[l]<arr2[j])
         {
             merged[k++]=arr1[l++];
         }
         else{
            merged[k++]=arr2[j++];
         }
     }
      while (l < m)
    {
        merged[k++] = arr1[l++];
    }

    while (j < n)
    {
        merged[k++] = arr2[j++];
    }
     cout << "Merged sorted array:\n";
    for (i = 0; i < m + n; i++)
    {
        cout << merged[i] << " ";
    }
    delete[] arr1;
    delete[] arr2;
    delete[] merged;



    return 0;
}
