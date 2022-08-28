#include<iostream>
using namespace std;
int main() {
  int i,j,n;
  cout<<"Enter a Number:\n";
  cin>>n;
  cout<<"The Number Pattern is:\n";
  for(i=1;i<=n;i++){
      for(j=1;j<=n-i;j++){
      cout<<" ";
      }
      for(j=1;j<=i;j++){
          cout<<j<<" ";
      }
      cout<<endl;
  }
  return 0;
}