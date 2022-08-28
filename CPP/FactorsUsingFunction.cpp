#include<iostream>
using namespace std;
void factors(int num) {
   int i;
   for(i=1; i <= num; i++) {
      if (num % i == 0)
      cout << i <<endl;
   }
}
int main(){
    int num;
    cout<<"Enter a Number to find Factors"<<endl;
    cin>>num;
    cout<<"The factors are:"<<endl;
    factors(num);
    return 0;
}