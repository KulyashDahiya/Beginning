// Reverse an array

#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end) {

    if(start>=end) {
        return;
    }
    swap(arr[start], arr[end]);

    reverseArray(arr, start+1, end-1);

}

int main() {

    int arr[] = {1,2,3,4,5};

    int n = sizeof(arr) / sizeof(int);
    int start = 0, end = n-1;
    
    reverseArray(arr, start, end);
    
    // while(start<end) {
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }

    // for(int i = 0; i<5; i++) {
    //     cout << arr[i] << " ";
    // }

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;

}