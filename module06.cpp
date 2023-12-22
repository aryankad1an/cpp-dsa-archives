#include<iostream>
using namespace std;
// arrays with functions
void printArray(int arr[], int size){
    for (int i = 0; i < size; ++i) {
        cout<<arr[i]<<endl;
    }
}

void reverseArray(int arr[], int size){
    // a good intuitive approach to this problem
    int start = 0;
    int end = size-1;
    while(start <= end){
        swap(arr[start], arr[end]); // built in swap function
        start++;end--;
    }
}

int uniqueElementFromArray(int arr[], int size){
    // some properties of xor which we can consider
    // n^0=n (any number xor-ed to 0 is itself)
    // n^n=0 (any number xor-ed to itself is zero)
    int result = 0;
    for (int i = 0; i < size; ++i) {
        result^=arr[i];
    }
    return result;
}

int main(){
    int nums[5] = {3, 4, 5, 6, 2};
    printArray(nums, size(nums));

    cout << "---" << endl;
    // note that there is always call by reference for arrays
    // it is because when we pass the arrays to function, we actualy pass the address of first element dawg


    // reversing an array
    reverseArray(nums, 5);
    printArray(nums, 5);

    cout << "---" << endl;

    // finding unique in an array with duplicates in pairs
    int findUnique[] = {4, 5, 5, 3, 4, 3, 69};
    cout << uniqueElementFromArray(findUnique, 7) << endl;
    return 0;
}