#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout<<"Enter a Number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
            for(k=n-i; k>0; k--){
                cout<<" ";
            }
            for(int t=1; t<=n; t++){
                cout<<"* ";
            }
            cout<<endl;
        }
    
    return 0;
}