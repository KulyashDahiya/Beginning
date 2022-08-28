#include<iostream>
using namespace std;
int main() {
    char c;
    int LC,UC;
    cin>>c;
    LC= ( c=='a' || c=='e' || c=='i' || c=='o' || c=='u' );
    UC= ( c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U' );

    if (LC||UC) {
        cout<<"c is vowel"<<endl;
    }
    else {
        cout<<"c is consonant"<<endl;
    }
return 0;
}