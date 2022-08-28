#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int a=1;
    for(int i=1; i<=n; i++){
        a *= i;
    }
    return a;
}
int main(){
    int n,r;
    cout<<"Enter the values of N and R:"<<endl;
    cin>>n>>r;
    int ans = fact(n)/(fact(n-r)*fact(r));
    cout<<"The value of nCr is: "<<ans<<endl;
    return 0;
}