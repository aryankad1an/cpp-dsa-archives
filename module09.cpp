#include<iostream>
#include<array>

using namespace std;
int main(){
    // C++ STL(standard template library)
    array<int, 4> a = {1,2,3,4}; //flashy way of writing arrays using STL
    cout << a.front() << endl;//first element
    cout << a.back() << endl; //last element
    cout <<a.empty() << endl; // tells if a is empty or not

    return 0;
}