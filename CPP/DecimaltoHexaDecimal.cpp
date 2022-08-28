#include<bits/stdc++.h>
using namespace std;

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

int32_t main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"\nThe hexa decimal is: ";
    decimalToHexa(n);
    return 0;
}