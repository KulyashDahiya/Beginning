#include<iostream>
using namespace std;
int main()
{
    int pocketmoney=3000;
    for(int date=1;date<=30;date++)
   {
       if(date%2==0) {
           continue;
       }
       if(pocketmoney<=0){
           break;
       }
       cout<<"Today's Date->"<<date<<endl;
       cout<<"You can go outside!"<<endl;
       pocketmoney=pocketmoney-400;
   }
   return 0;
}