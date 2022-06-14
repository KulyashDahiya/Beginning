#include<stdc++.h>
using namespace std;

//Pairs
void explainPari(){
    pair<int, int> p = {1,3};
    cout << p.first << " " << p.second;
    pair<int, pair<int, int>> p1 = {1, {3,4}};
    cout << p.first << " " << p1.second.second << " " << p1.second.first;
    pair<int, int> arr[] = { {1, 2}, {2, 5}, {5,1}};
    cout << arr[1].second;
}

void explainVector() {
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>>vec;

    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v1(5, 100); //container of 5 instances(100,100,100,100,100)
    vector<int> v2(5);

    vector<int> v3(5,20);
    vector<int> v4(v3);
    
}

int main(){
    cout<< "Hello World" <<endl ;
    return 0;
}
