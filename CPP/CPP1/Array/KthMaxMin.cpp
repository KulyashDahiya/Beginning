#include<bits/stdc++.h>
using namespace std;

int main() {

    int k;
    cout << "Enter K: ";
    cin >> k;

    vector<int> v;
    v.push_back(7);
    v.push_back(55);
    v.push_back(33);
    v.push_back(15);
    v.push_back(2);
    v.push_back(25);

    cout << "Before Sorting: ";
    for(auto it : v) {
        cout << it << " ";
    }

    sort(v.begin(), v.end());
    
    cout << "\nAfter Sorting in Ascending Order: ";
    for(auto it : v) {
        cout << it << " ";
    }

    cout << "\nKth Minimum Element: " << v[k-1];

    sort(v.begin(), v.end(), greater<int>());

    cout << "\nAfter Sorting in Descending Order: ";
    for(auto it : v) {
        cout << it << " ";
    }
    cout << "\nKth Maximum Element: " << v[k-1];

    return 0;
}