#include<bits/stdc++.h>
using namespace std;

int checkSort(int arr[], int n, int i)
{
        //If traversed whole array
        if(i>=n){
            return 1;
        }
        //if next element found to smaller
        else if(arr[i]<arr[i-1])
        {
            return 0;
        }
        //Recursive Call
        checkSort(arr, n, i+1);
}

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements of Array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int i=1;
    if(checkSort(arr,n,i))
    {
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is Not sorted"<<endl;
    }

    return 0;
}