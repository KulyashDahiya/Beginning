#include<stdc++.h>
using namespace std;

void swap(int *arr, int j)
{
    int temp = *(arr+j);
    *(arr+j) = *(arr+j+1);
    *(arr+j+1) = temp;
}

void BubbleSort(int *arr, int n)
{
    int count=0;
    while(count<n)
    {
        bool swapped = false;
        for(int j=0; j<n; j++)
        {
            if(*(arr+j)>*(arr+j+1))
            {
                swapped = true;
                swap(arr,j);
            }
        }
        if(!swapped)
        {
            break;
        }
        count++;
    }
}

int main()
{
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    BubbleSort(arr,n);   
    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

}