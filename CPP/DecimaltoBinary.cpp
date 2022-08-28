#include<bits/stdc++.h>
using namespace std;
void decimalToBinary(int n)
{
    int i=0, a[n], rem;
    while(n>0)
    {
        rem = n%2;
        n/=2;
        a[i]=rem;
        i++;
    }
    for (int j = i-1; j>=0 ; j--)
    {
        cout<<a[j];
    }
    return;
}
int main(){
    int n;
    cin>>n;
    decimalToBinary(n);
    return 0;
}