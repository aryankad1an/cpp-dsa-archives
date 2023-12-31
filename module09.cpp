#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>

using namespace std;
int main(){
    // C++ STL(standard template library)
    array<int, 4> a = {1,2,3,4}; // flashy way of writing arrays using STL
    cout << a.front() << endl;// first element
    cout << a.back() << endl; // last element
    cout <<a.empty() << endl; // tells if a is empty or not

    vector<int> v; // dynamic arrays
    cout << "Max Capacity ->" << v.capacity() << endl;
    cout << "Size ->" << v.size() << endl;

    v.push_back(1);
    cout << "Max Capacity ->" << v.capacity() << endl;
    cout << "Size ->" << v.size() << endl;

    v.push_back(3);
    cout << "Max Capacity ->" << v.capacity() << endl;
    cout << "Size ->" << v.size() << endl;

    v.push_back(2);
    cout << "Max Capacity ->" << v.capacity() << endl;
    cout << "Size ->" << v.size() << endl;

    // note that vectors have dynamic size and "max capacities"
    v.pop_back(); // removes last element
    //v.clear(); // capacity remains same however size is 0'ed

    vector<int> v2(5,1); // 5 elements, all initialised with 1
    for (int i: v2) {
        cout << i <<" ";
    }
    cout << endl;

    vector<int> v3(v); // vector v3 initialised as copy of vector v
    for (int i: v3) {
        cout << i <<" ";
    }
    cout << endl;


    //Deque (both ended insertions and deletions) [complex implementation unlike vector and arrays]
    deque<int> d;
    d.push_back(4);
    d.push_back(2);
    d.push_back(1);
    d.push_back(5);
    d.push_front(8);
    d.push_front(0);
    d.push_front(57);
    d.push_front(9);
    d.pop_back();
    d.pop_front();
    cout << d[4] <<endl;

    // List STL
    list<int> l;
    l.push_back(4);
    l.push_front(8);

    // stack STL [Last in first out]
    stack<string> s;
    s.push("Love");
    s.push("Babbar");
    s.push("Kumar");
    cout << "Top Element -> " << s.top() << endl;
    s.pop();

    //queue STL [first in first out]
    queue<string> q;
    q.push("Love");
    q.push("Babbar");
    q.push("Kumar");
    cout << "Front Element -> " << q.front() << endl;

    // sets STL{stores only unique elements}
    set<int> se;
    se.insert(4);
    se.insert(6);
    se.insert(9);
    se.insert(0);

    cout << se.contains(6) << endl; //boolean (O(logn) complexity)

    // maps STL
    map<string, int> ages;

    // Insert elements
    ages["Alice"] = 25;
    ages["Bob"] = 30;
    ages["Charlie"] = 20;

    // Access elements
    cout << "Alice's age: " << ages["Alice"] << endl;

    // Iterating through elements
    for (auto it = ages.begin(); it != ages.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    // Finding elements
    auto iter = ages.find("Bob");
    if (iter != ages.end()) {
        cout << "Bob's age found: " << iter->second << endl;
    }

    // Deletion
    ages.erase("Charlie");
    /*
     Searching for elements using a key is very efficient.
     It uses a binary search tree internally, providing logarithmic
     time complexity for search, insertion, and deletion operations.
     */

    /*
     STL ALGORITHMS
     */
    int arr[] = {5, 6, 7, 69, 21, -32, 8, 10, 12};
    sort(arr, arr+size(arr)); // sorts the array, based on intro sort(time complexity: O(nlog(n))
    cout << binary_search(arr, arr+size(arr), 8) << endl; // returns boolean
    // here arr is an iterator pointing towards first element, for vector it will be vector.begin()
    // arr+size(arr) is an iterator pointing towards last element, for vector it will be vector.end()

    reverse(arr, arr+size(arr)); // reversed the array
    for(auto i: arr){ // auto means automatic data type declaration
        cout << i << " ";
    }
    cout << endl;

    // do when u see: rotate function

    return 0;
}