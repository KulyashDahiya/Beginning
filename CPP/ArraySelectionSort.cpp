#include<bits/stdc++.h>
using namespace std;
void swap(int *arr, int i, int j)
{
    int temp = *(arr+i);
    *(arr+i) = *(arr+j);
    *(arr+j) = temp;
}

int *selectionSort(int *arr, int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(*(arr+j) < *(arr+i))
            {
                swap(arr,i,j);
            }
        }
    }
    return arr;
}

int main()
{
    int n;
    cout<<"Enter no. of Elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter ELEMENTS of array:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The sorted array is: ";
    int *p;
    p =   selectionSort(arr, n);
    for(int i=0; i<n; i++){
    cout<<*(p+i)<<" ";   
    }
    return 0;
}