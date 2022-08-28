#include<bits/stdc++.h>
using namespace std;
bool isChar(char ch){
    bool value;
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        return true;
    }
    return false;
}
int main(){
    char ch;
    cout<<"Enter a Character: ";
    cin>>ch;
    if(isChar(ch)){
    cout<<"It is an alphabet"<<endl;
    }
    else{
        cout<<"It is not an alphabet"<<endl;
    }
    return 0;
}