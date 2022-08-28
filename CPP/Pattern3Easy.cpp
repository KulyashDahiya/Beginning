#include<iostream>
using namespace std;
int main() {
    int n,i,j;
    cout<<"Enter the no.\n";
    cin>>n;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++){
        cout<<"*";
        }
    cout<<endl;
    }
    return 0;
}