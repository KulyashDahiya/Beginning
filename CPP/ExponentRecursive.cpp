#include<stdc++.h>
using namespace std;

int getExponent(int n, int m)
{
    if(m==0)
        return 1;
    
    int ans = n * getExponent(n,m-1);
    return ans;    
}

int main()
{
    int n;
    cout<<"Enter Base: ";
    cin>>n;
    cout<<"Enter Power: ";
    int m;
    cin>>m;
    cout<<n<<" To the power "<<m<<" is: "<<getExponent(n,m);
    return 0;
}