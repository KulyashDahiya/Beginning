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

    //Iterator function

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " ";
    it = it + 2;
    cout << *(it) << " ";
    
    vector<int>::iterator it = v.end();
    vector<int>::iterator it = v.rend();
    vector<int>::iterator it = v.rbegin();

    cout << v[0] << " " << v.at(0);
    cout << v.back() << " ";

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    for (auto it : v) {
        cout << it << " ";
    }

    for (auto it : v) {
        cout << it << " ";
    }

    //{10,20,12,23} Erase Function
    v.erase(v.begin()+1); //{10,12,23}

    //Insert Function
    vector<int>v(2,100); //{100,100}
    v.insert(v.begin(), 300); //{300,100,100}
    v.insert(v.begin()+1, 2, 10); //{300,10,10,100,100}

    vector<int> copy(2, 50); //{50,50}
    v.insert(v.begin(), copy.begin(), copy.end()); //{50,50,300,10,10,100,100}

    //{10,20}
    v.size(); // 2

    //{10,20}
    v.pop_back(); //{10}

    // v1 -> {10,20}
    // v2 -> {30,40}
    v1.swap(v2); // // v1 -> {30,40} , v2 -> {10,20}

    v1.clear(); // erases the entire vector

    cout << v.empty();  // True or False

}

void explainList() {
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);
    ls.emplace_front(); //{2,4}

    //rest functions are same as vector
    // begin, rbegin, rend, clear, insert, size, swap
}

void explainDeque(){
    deque<int>dq;
    dq.push_back(1); //{1};
    dq.emplace_back(2) //{1,2}
    dq.push_front(4); //{4,1,2}
    dq.emplace_front(3); //{3,4,1,2}

    dq.pop_back(); //{3,4,1}
    dq.pop_front(); //{4,1}

    dq.back();
    dq.front();

    //rest functions are same as vector
    // begin, rbegin, rend, clear, insert, size, swap
}

void explainStack() {   //LIFO
    stack<int> st;
    st.push(1); //{1} 
    st.push(2); //{2,1} 
    st.push(3); //{3,2,1} 
    st.push(3); //{3,3,2,1} 
    st.emplace(5); //{5,3,3,2,1} 
    cout << st.top(); // prints 5 "** st[2] is invalid **"
    
    st.pop(); // st looks like {3,3,2,1}
    
    cout << st.top(); //3
    cout << st.size(); //4
    cout << st.empty();

    stack<int> st1, st2;
    st1.swap(st2);

}

void explainQueue() {  //FIFO
    queue<int>  q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.emplace(4); //{1,2,4}

    q.back() += 5;
    cout << q.back(); //prints 9

    //Q is {1,2,9}
    cout << q.front(); //prints 1

    q.pop(); //{2,9}
    cout << q.front(); // prints 2

    //size swap empty same as stack
}

int main(){
    cout<< "Hello World" <<endl ;
    return 0;
}
