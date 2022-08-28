#include<iostream>
using namespace std;
int main() {
  int i,j,n,k;
  cout<<"Enter a Number:\n";
  cin>>n;
  cout<<"The Pallindromic Pattern is:\n";
  for(i=1;i<=n;i++){
      for(j=1;j<=n-i;j++){
      cout<<"  ";
      }
      for(k=i;k>=1;k--){
          cout<<k<<" ";
      }
      for(k=2;k<=i;k++) {
          cout<<k<<" ";
      }
      cout<<endl;
  }
  return 0;
}