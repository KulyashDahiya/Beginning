#include<bits/stdc++.h>
using namespace std;

int getExponent(int n)
{
    if(n==0)
      return 1;
    
    int half = getExponent(n/2);

    if(n&1)
    {
        return 2*half*half;
    }
    else
        return half*half;

}

int main()
{
    int n;
    cin>>n;
    cout<<"2 To the power "<<n<<" is: "<<getExponent(n);
    return 0;
}