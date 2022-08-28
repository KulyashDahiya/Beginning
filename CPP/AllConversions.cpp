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
int HexaToDecimal(string n)
{
    int ans=0;
    int x=1;

    int s=n.size();
    for(int i =s-1; i>=0; i--)
    {
        if(n[i] >= '0' && n[i] <= '9')
        {
            ans += x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F')
        {
            ans += x*(n[i]-'A' + 10);
        }
        x*=16;
    }
    return ans;

}
int binaryToDecimal(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
        int y = n%10;
        ans += x*y;
        x *= 2;
        n /= 10;
    }
    return ans;
}
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
void decimalToHexa(int n)
{
    int rem=0,a[n],i=0,j;
    char hexa[n];
    while(n>0)
    {
        rem = n%16;
        if(rem<10)
        {
            hexa[i++]=48 + rem;
        }
        else
        {
            hexa[i++]= 55+rem;
        }
        n/=16;
    }
    for (j= i-1; j>=0 ; j--)
    {
        cout<<hexa[j];
    }
    
}
int32_t main(){
    string a;
    int n;
    cout<<"Enter same no. TWICE: "<<endl;
    cin>>n;
    cin>>a;
    cout<<"Hexa to Decimal is:";
    cout<<HexaToDecimal(a)<<endl;
    cout<<"Octal to Decimal is: "<<OctaltoDecimal(n)<<endl;
    cout<<"Binary to Decimal is: "<<binaryToDecimal(n)<<endl;
    cout<<"Decimal to Binary is: ";
    decimalToBinary(n);
    cout<<endl;
    cout<<"Decimal to Octal is: ";
    decimalToOctal(n);
    cout<<"\nDecimal to hexa decimal is: ";
    decimalToHexa(n);
    return 0;
}
