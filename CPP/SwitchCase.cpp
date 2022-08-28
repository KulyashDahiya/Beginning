#include<iostream>
using namespace std;
int main(){

    char button;
    int i,n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter a character"<<endl;
        cin>>button;
    switch (button)
    {
    case 'a': 
        cout<<"Hello"<<end
        break;
    case 'b': 
        cout<<"World"<<endl;
        break;
    case 'c': 
        cout<<"Kulyash here writing Switch code"<<endl;
        break;    
    
    default:
    cout<<"I am still learning more!"<<endl;
        break;
    }
    }
    return 0;
}