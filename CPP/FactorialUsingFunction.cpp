#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int ans=1;
    for(int i=1; i<=n; i++){
        ans *= i;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter a number N: ";
    cin>>n;
    int ans= fact(n);
    cout<<"The desired Factorial is: "<<ans<<endl;
    return 0;
}