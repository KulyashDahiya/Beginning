// Move all negative numbers to one side of the array

#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int arr[] = {5,12,-1,76,-7,-33,-55,55,1,-12};
    int n = sizeof(arr) / sizeof(int);
    cout << n << endl;
    sort(arr, arr+n);

    for(auto it : arr) {
        cout << it << " ";
    }

    return 0;
}