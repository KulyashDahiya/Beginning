#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
        else
        {
            continue;
        }
    }
    return -1;
}

int32_t main() 
{
     int n;
     cout<<"Enter size of array: ";
     cin>>n;
     int arr[n];
     cout<<"Enter elements in array:"<<endl;
     for(int i=0; i<n; i++)
     {
         cin>>arr[i];
     }
     int key;
     cout<<"Enter the key to find: ";
     cin>>key;
     int a = linearSearch(arr,n,key);
     if(a== -1)
     {
         cout<<"Key NOT found";
     }
     else
     {
         cout<<"Key found at: "<<a<<" position";
     }
}