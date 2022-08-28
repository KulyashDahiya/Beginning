#include<iostream>
using namespace std;
int main() {
int num,i,n,a,b;
cout<<"Enter the Range of Prime numbers"<<endl;
cin>>a>>b;
cout<<"The Prime Numbers are:"<<endl;
for(num=a;num<=b;num++){
    for(i=2;i<num;i++){
        if(num%i==0){
            break;
        }
    }
    if(i==num){
        cout<<i<<endl;
    }
}
return 0;

}