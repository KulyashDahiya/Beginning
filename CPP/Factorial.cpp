#include <iostream>  
using namespace std;  
int main()  
{  
   int num;
   cout<<"Enter a Number: ";
   cin>>num;
   int factorial =1;
   for(int i=2; i<=num; i++){
       factorial*=i;
   }
   cout<<"Factorial is: "<<factorial<<endl;
  return 0;  
}  