#include<iostream>
using namespace std;
// arrays with functions
void printArray(int arr[], int size){
    for (int i = 0; i < size; ++i) {
        cout<<arr[i]<<endl;
    }
}


int main(){
    int nums[5] = {3, 4, 5, 6, 2};
    printArray(nums, size(nums));
    return 0;
}