#include<iostream>
using namespace std;
int main(){
    int n,lastdigit,reverse;
    cout<<"Enter a Number to reverse"<<endl;
    cin>>n;
    reverse=0;
    while(n>0){
        int lastdigit= n%10;
        reverse = reverse*10 + lastdigit;
        n= n/10;
    }
    cout<<reverse<<endl;
    return 0;
}