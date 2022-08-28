#include<iostream>
using namespace std;
int main(){
    int i,j,n,count=1;
    cout<<"Enter the number of rows:\n";
    cin>>n;
    cout<<"\nThe Floyd's Triangle is:\n";
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j<=i){
                cout<<count<<" ";
                count++;
            }
            else{
            continue;
            }
        }
        cout<<endl;
    }
}