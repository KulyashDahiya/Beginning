#include<stdc++.h> //All in Log(n) complexity

// First Occurrence Of X in a sorted array, print -1 if not exist

A[] = {1,4,4,4,4,9,9,10,11};

int ind = lower_bound(a, a+n, X) - a;
if(ind != n && a[ind] == X) cout << ind;
else cout << -1;

// Last Occurrence Of X in a sorted array, print -1 if not exist

A[] = {1,4,4,4,4,9,9,10,11};

ind = upper_bound(a, a+n, X) - a;
ind--;

if(ind>=0 && a[ind] == X) cout << ind;
else cout << -1;

// Find th largest number smaller than X in a sorted array, print -1 if not exist

A[] = {1,4,4,4,4,9,9,10,11};

int ind = lower_bound(a, a+n, X) - a;
ind--;

if(ind>=0) cout << a[ind];
else cout << -1;

// Smallest number greater than X

A[] = {1,4,4,4,4,9,9,10,11};

int ind = upper_bound(a, a+n, X) - a;

if(ind<n) cout << a[ind];
else cout << -1;