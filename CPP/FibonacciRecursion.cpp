#include<bits/stdc++.h>
using namespace std;

int getFib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }

    return getFib(n-1) + getFib(n-2);
}

int main()
{
    int n;
    cout<<"Enter N: "<<endl;
    cin>>n;
    cout<<"Value of "<<n<<"th Fibonacci is "<<getFib(n)<<endl;
    return 0;
}