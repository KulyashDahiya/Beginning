#include<iostream>
using namespace std;
int main(){
    int i=1,j=2,k;
      //1  //2   //1   //4  //3   //3    //5        //4  //5   //19
    k= i + j++ + i++ + ++j + ++i + i++ + ++j;
    cout<<i<<" "<<j<<"       "<<k;
    return 0;
}