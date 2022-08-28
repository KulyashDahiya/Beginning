#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    int sum1=0;
    for(int i=1; i<=n; i++){
        sum1 += i;
    }
    return sum1;
}
int main(){
    int n;
    cout<<"Enter a Number N: ";
    cin>>n;
    int ans = sum(n);
    cout<<"The sum of first n numbers is: "<<ans<<endl;
    return 0;
}