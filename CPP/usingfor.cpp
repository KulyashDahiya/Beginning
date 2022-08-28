#include<iostream>
using namespace std;
int main() {
    int n,i;
    cout<<"Enter a value "<<endl;
    cin>>n;
    for(i=1<<n;i++) {
             cout<<"Current value="<<i<<endl;
    }
return 0;    
}