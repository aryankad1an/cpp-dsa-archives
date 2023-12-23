#include<iostream>

using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
//    int mid = (start+end)/2;
    int mid = start + ((end - start)/2); // prevents out of range for integer
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + ((end - start)/2);
    }
    return -1; // if not found
}

int main(){
    // binary search algorithm
    // NOTE: array needs to be sorted(monotonic order)

    // time complexity of binary search: O(log(n))

    int even[6] = {2, 3, 4, 7, 8, 9};
    int odd[5] = {1, 3, 5, 6, 7};

    cout << binarySearch(even, 6, 4) << endl; // returns index
    cout << binarySearch(odd, 5, 7) << endl;
    return 0;
}