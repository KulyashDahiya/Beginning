#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    cout<<"\nThe Patter is:\n";
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j<=i)
                cout<<i<<" ";
            else
            continue;
        }
        cout<<endl;
    }
}