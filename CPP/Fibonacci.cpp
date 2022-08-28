#include<bits/stdc++.h>
using namespace std;
void fib(int n){
    int t1=0;
    int t2=1;
    int nextTerm;
    cout<<"The fibonacci series upto N is: ";
    for(int i=1; i<=n; i++){
        cout<<t1<<" ";
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return;
}
int main(){
    int n;
    cout<<"Enter a number N: ";
    cin>>n;
    fib(n);
    return 0;
}