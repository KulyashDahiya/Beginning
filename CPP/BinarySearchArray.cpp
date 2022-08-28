#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n, int key)
{
    int s=0;
    int e=n;
    while(s<=e)
    {
        int mid= (s+e)/2;
        if(arr[mid]== key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e = mid-1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int32_t main()
{
    int n;
    cout<<"Enter no. of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements: "<<endl;
    for(int i=0 ; i<n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key to find: ";
    cin>>key;
    int res = binarySearch(arr,n,key);
    if(res== -1)
    {
        cout<<"ELEMENT NOT FOUND";
    }
    else{
        cout<<"Element found at: "<<res<<" position"<<endl;
    }
    return 0;
}