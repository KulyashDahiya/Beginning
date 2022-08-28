#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end, int n)
{
    if (start >= end)
    {
        cout<<"Reversed Array is: ";
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
    return;
    }
        
     
    int temp = arr[start]; 
    arr[start] = arr[end];
    arr[end] = temp;
     
    // Recursive Function calling
    reverseArray(arr, start + 1, end - 1, n); 
}

int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter Elements: ";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    reverseArray(arr, 0, n-1, n);
    return 0;
}