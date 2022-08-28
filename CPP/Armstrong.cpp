#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n, originaln;
    float lastdigit, sum;
    cout<<"Enter a Number"<<endl;
    cin>>n;
    sum=0;
    originaln=n;
    while(n>0){
        lastdigit=n%10;
        sum+= pow(lastdigit,3);
        n=n/10;
    }
    if(sum==originaln){
    cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"Not Armstrong"<<endl;
    }
    cout<<"The sum came to be: "<<sum<<endl;
}