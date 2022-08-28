#include<stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end, int n)
{
    if(start >= end)
    {
        cout<<"Reversed Array is: ";
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        return;
    }

    swap(arr[start], arr[end]);

    //Recursive Calling Reverse Array Function
    reverseArray(arr, start+1, end-1, n);
}

int main()
{

    int n;
    cout<<"Enter Size:";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    reverseArray(arr, 0, n-1, n);

    return 0;
}