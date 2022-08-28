#include<iostream>
using namespace std;
void print(int num){
    cout<<num<<endl;
    return;
}
int Add(int num1,int num2){
    int sum=num1 + num2;
    return sum;
}
int main(){
    int a,b;
    cout<<"Enter 2 Numbers: "<<endl;;
    cin>>a>>b;
    cout<<"The Sum is: "<<Add(a,b)<<endl;
    return 0;
}