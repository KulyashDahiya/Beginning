#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter a number:\n";
    cin>>n;
    cout<<"The star pattern for the given number is:\n";
    for(i=1;i<=n;i++){
        int j;
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(;j<=n;j++){
            cout<<"* ";
        }
        for(;j<=n+i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=n-1;i>=1;i--){
        int j;
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(;j<=n;j++){
            cout<<"* ";
        }
        for(;j<=n+i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}