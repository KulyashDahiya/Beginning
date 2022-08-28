#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter a Number"<<endl;
    cin>>n;
    cout<<"The 0-1 Pattern is:"<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    return 0;
}