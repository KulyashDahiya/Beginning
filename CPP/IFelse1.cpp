#include<iostream>
using namespace std;
int main() 
{
    int a,b;
    int min,max;

    cin>>a>>b;
    
    if(a>b) {
        min=b;
        max=a;
    }
    else {
        min=a;
        max=b;
    }

    cout<<"max="<<max<<endl;
    cout<<"min="<<min<<endl;

    return 0;
}