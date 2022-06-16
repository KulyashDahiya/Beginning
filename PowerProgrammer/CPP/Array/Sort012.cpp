
#include <bits/stdc++.h>
using namespace std;

// Utility function to print the contents of an array
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

// Function to sort the array of 0s, 1s and 2s
void sortArr(int a[], int n)
{
    int i, cnt0 = 0, cnt1 = 0, cnt2 = 0;

    // Count the number of 0s, 1s and 2s in the array
    int b0 =0, b1=0, b2=0;
        for(int i = 0; i<n; i++){
            if(a[i] == 0){
                b0++;
            } else if(a[i] == 1){
                b1++;
            } else {
                b2++;
            }
        }

    // Update the array
    int k = 0;
        
        for(int i = 0; i<b0; i++) a[k++] = 0;
        for(int i = 0; i<b1; i++) a[k++] = 1;
        for(int i = 0; i<b2; i++) a[k++] = 2;

    // Print the sorted array
    printArr(a, n);
}

// Driver code
int main()
{
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int n = sizeof(arr) / sizeof(int);

    sortArr(arr, n);

    return 0;
}
