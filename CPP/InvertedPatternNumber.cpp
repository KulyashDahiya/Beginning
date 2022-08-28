#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter a number\n";
    cin>>n;
    cout<<"The Intverted Pattern is:\n";
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}