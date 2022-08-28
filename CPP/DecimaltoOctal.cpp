#include<bits/stdc++.h>
using namespace std;
void decimalToOctal(int n)
{
    int i=0, a[n], rem;
    while(n>0)
    {
        rem = n%8;
        n/=8;
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
    cout<<"Octal Value is: ";
    decimalToOctal(n);
    return 0;
}