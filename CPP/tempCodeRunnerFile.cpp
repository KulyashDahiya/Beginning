// second change for trying git bash
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number to find Factors"<<endl;
    cin>>n;
    cout<<"The factors are:"<<endl;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }
    return 0;