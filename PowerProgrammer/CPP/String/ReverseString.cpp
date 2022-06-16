//Reverse a string

#include<bits/stdc++.h>
using namespace std;

int main() {

    cout << "Enter a string: " ;
    string s;
    cin>>s;

    int n = s.length();

    int start = 0, end = n-1;

    while(start<end) {
        swap(s[start],s[end]);
        start++;
        end--;
    }

    cout << s << endl;
 
 return 0;

}
