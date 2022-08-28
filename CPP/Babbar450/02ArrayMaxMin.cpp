#include<bits/stdc++.h>
using namespace std;

struct Pair
{
    int max;
    int min;
};

struct Pair getMinMax(int arr[], int n)
{
    int i;
    struct Pair minmax; 

    if(n==1)
    {
        minmax.min = arr[0];
        minmax.max = arr[0];
        return minmax;
    }
    else if(arr[0]>arr[1])
    {
        minmax.min = arr[1];
        minmax.max = arr[0];
    }
    else
    {
        minmax.min = arr[0];
        minmax.max = arr[1];
    }

    for(i=2; i<n; i++)
    {
        if(arr[i]>minmax.max)
        {
            minmax.max = arr[i];
        }
        else if(arr[i]<minmax.min)
        {
            minmax.min = arr[i];
        }
    }

    return minmax;
}

int main()
{
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;

    if(n==0)
    {
        cout<<"No Element in array"<<endl;
        return 0;
    }

    int arr[n];
    cout<<"Enter Elements of Array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    struct Pair minmax = getMinMax(arr, n);
    
    cout<<"Max Element is: "<<minmax.max<<"\t";
    cout<<"Min Element is: "<<minmax.min<<endl;

    return 0;    

}