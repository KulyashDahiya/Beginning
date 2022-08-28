#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    for(int i=2; i<=sqrt(num); i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    cout<<"Enter 2 Numbers:"<<endl;
    cin>>a>>b;
    cout<<"The Prime Numbers between them are:"<<endl;
    for(int i=a; i<=b;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}