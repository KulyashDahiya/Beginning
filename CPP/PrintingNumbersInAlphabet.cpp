#include<stdc++.h>
using namespace std;

void printSpell(int n, string str[])
{
    // base case
    if(n==0)
    {
        return;
    }
    //recursive call
    printSpell(n/10, str);
    cout<<str[n%10]<<" ";
}

int main()
{
    int n;
    cout<<"Enter N: ";
    cin>>n;

    string str[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    cout<<"Answer is: ";
    printSpell(n, str);
    return 0;

}