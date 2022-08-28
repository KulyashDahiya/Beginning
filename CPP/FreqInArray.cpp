#include<stdc++.h>
using namespace std;

int main()
{
    int arr[] = {15, 11, 12, 15, 67, 23, 15, 67 ,15};
    int n = 9;
    int key;
    cin>>key;
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]== key)
           count++;
    }
    cout<<count;
    return 0;
}