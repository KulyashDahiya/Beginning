#include<iostream>
using namespace std;
int main() {
  int i,n,k;
  cout<<"Enter a Number:\n";
  cin>>n;
  cout<<"The Pallindromic Pattern is:\n";
  for(i=1;i<=n;i++){
      int j;
      for(j=1;j<=n-i;j++){
      cout<<"  ";
      }
      k=i;
      for(;j<=n;j++){
          cout<<k--<<" ";
      }
      k=2;
      for(;j<=n+i-1;j++) {
          cout<<k++<<" ";
      }
      cout<<endl;
  }
  return 0;
}