// Find maximum and minimum element in an array

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    cout << "Enter size: ";
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) 
    {
        cin >> arr[i];
    }

    int maxi = INT_MIN;
    int mini = INT_MAX;

    for(int i = 0; i<n; i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
        
        if (arr[i]< mini){
            mini = arr[i];
        }
    }

    // int maxi = *max_element(arr, arr+n-1);
    // int mini = *min_element(arr, arr+n-1);

    cout << maxi << " " << mini;

}