#include<stdc++.h>
using namespace std;

//Pairs
void explainPair(){
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

void explainPQ() {   //Max Heap
    // TC -   push log(n),  pop log(n), top O(1)

    priority_queue<int>  pq;
    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    pq.emplace(10); //{10,8,5,2}

    cout << pq.top(); //prints 10

    pq.pop(); //{8,5,2}
    cout << pq.top(); //prints 8

    //size swap empty fuction same as stack

    //Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); //{5}
    pq.push(2); //{2,5}
    pq.push(8); //{2,5,8}
    pq.emplace(10); //{2,5,8,10}
    
    cout << pq.pop(); // prints 2

}

void explainSet() {  //Everthing happens in Logarithmic time complexity
    set<int>st;
    st.insert(1); //{1}
    st.emplace(2); //{1,2}
    st.insert(2); //{1,2}
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4}

    //Functionality of insert in vector
    //can be used also, that only increases efficiency

    //begin(), end(), rbegin(), rend(), size(),
    //empty() and swap() are same as those of above

    //{1,2,3,4,5}
    auto it = st.find(3);

    //{1,2,3,4,5}
    auto it = st.find(6); //returns se.end() if element is not found
    
    //{1,4,5}
    st.erase(5); //erases 5 // takes loagarithmic time

    int cnt = st.count(1);
    
    auto it = st.find(3);
    st.erase(it); //it takes constant time

    //{1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase{1,4,5} [first, last]

    //lower_bound() and upper_bound() function works in the same way
    //as in vector it does

    //This is the syntax
    auto it = it.lower_bound(2);
    auto it = it.upper_bound(3);

}

void explainMultiSet() {
    //Everthing is same as set
    //Only stores duplicate elements also

    multiset<int>ms;
    ms.insert(1) //{1}
    ms.insert(1) //{1,1}
    ms.insert(1) //{1,1,1}

    ms.erase(1); //all 1's erased

    int cnt = ms.count(1);

    //only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1)+2); //find 1 and go till 2

    //rest all functions same as set
}

void explainUnOrderedSet() {
    unordered_set<int> st;        //unsorted but unique -- Most cases O(n)
    //upper_bound and lower_bound function do not work, rest functions are same.
}

void explainMap() {   
    map<int, int> mpp;
    mpp[1]=2;  // key = 1, value = 2
    mpp.emplace({3,1}); // key = 3, value = 1;

    mpp.insert({2,4}); // key = 2, value = 4;
    //Stores unique Keys in sorted order
    {
        {1,2}
        {2,4}
        {3,1}
    }

    map<int, pair<int,int>> mpp;
    mpp[{2,3}]= 10; // key = {2,3}, value = 10

    map< pair<int, int>, int> mpp;

    for(auto it : mpp) {
        cout << it.first << " " << it.second << endl; //it.first=key, it.second=value
    }

    cout << mpp[1];  //prints 2
    cout << mpp[5];  //prints null

    auto it = mpp.find(3);
    cout << *(it).second;

    auto it = mpp.find(5);  //points to after map mpp.end()

    //This is the syntax
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    //erase, swap, size, empty, are same as above

}

void explain MultiMap() {
    // everything same as map, only it can store multiple keys
    // only map[key] cannot be used here
}

void explainUnorderedMap() {
    // same as set and unordered_Set difference.
    // Map works in logN time and unordered map works in constant time.
}

bool comp(pair<int,int>p1, pair<int,int>p2) {
    if(p1.second < p2.second) {
        return true;
    } else if(p1.second == p2.second) {
        if(p1.first>p2.second) return true;
    }
    return false;
}

void explainExtra() {
    sort(a, a+n);
    sort(v.begin(), v.end());
    
    sort(a, a+n, greater<int>()); //sort in descending order

    //Sorting in My Way
    pair<int, int> a[] = {{1,2}, {2,1}, {4,1}};
    //sort it according to second element
    //if second element is same, then sort
    //it according to first element but in decending
    sort(a, a+n, comp);

    //STL - builtin_popcount(); and builtin_popcountll();
    int sum = 7;
    int cnt = __builtin_popcount(); //returns 3

    long long num = 165786578687;
    int cnt = __builtin_popcountll();

    string s = "123"; //123,132,213,231,312,321, null //start from sorted 123
    do {
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a, a+n);
    int mini = *min_element(a, a+n);
    
}

void explainLowerUpperBound() { //Binary Search STL

    a[] = {1,4,5,6,9,9};
    
    int ind = lower_bound(a, a+n, 4) - a;
    int ind = upper_bound(a, a+n, 4) - a;

    int ind = upper_bound(a.begin(), a.end(), x) - a.begin(); //for vector
    
}

int main(){
    cout<< "Hello World" <<endl ;
    return 0;
}
