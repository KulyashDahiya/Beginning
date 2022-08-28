#include<bits/stdc++.h>
using namespace std;
int OctaltoDecimal(int n)
{
    int ans=0;
    int x=1;

    while(n>0)
    {
        int i=n%10;
        ans+= x*i;
        x*=8;
        n/=10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<OctaltoDecimal(n)<<endl;
    return 0;
}