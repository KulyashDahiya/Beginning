#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int a=1;
    for(int i=2; i<=n; i++){
        a *= i;
    }
    return a;
}
int nCr(int n, int r){
    int ans = fact(n)/(fact(n-r)*fact(r));
    return ans;
}
int main(){
    int i,j,n;
    cout<<"Enter a Number: ";
    cin>>n;
    for(i=0; i<n; i++){
        for(j=0; j<=i; j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
}