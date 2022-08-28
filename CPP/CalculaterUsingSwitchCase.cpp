#include<iostream>
using namespace std;
int main(){
    char op;
    int n1,n2;
    float temp=0.0;
    cout<<"Enter 2 numbers to perform an operation"<<endl;
    cin>>n1>>n2;
    cout<<"Enter Operation to be performered\n";
    cin>>op;
    switch (op)
    {
    case 'A':
        temp=n1+n2;
        break;
    case 'S':
        temp=n1-n2;
        break;    
    case 'D':
        cout<<(float)n1/n2<<endl;
        break;
    case 'M':
        temp=n1*n2;
        break;    
    default:
    cout<<"Enter another operator"<<endl;
        break;
    }
    if(op=='A' || op=='S'|| op=='M'){
    cout<<"The answer is:"<<temp<<endl;
    }
    return 0;
}