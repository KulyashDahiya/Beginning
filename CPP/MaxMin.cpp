#include<iostream>
using namespace std;

int main() {
    int m,n;
    cin>>m>>n;
    int max,min;

    if(m>n){
        max=m;
        min=n;
    }
    else {
        max=n;
        min=m;
    }

    cout<<"max="<<max<<endl;
    cout<<"min="<<min<<endl;
    return 0;

}