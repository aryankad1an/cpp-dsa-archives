#include<iostream>

using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
//    int mid = (start+end)/2;
    // int mid = start + ((end - start)/2); // prevents out of range for integer
    while(start <= end){
        int mid = start + ((end - start)/2); // prevents out of range for integer
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        //mid = start + ((end - start)/2);
    }
    return -1; // if not found
}

int leftMostOccurrence(int arr[], int size, int key){
      int s = 0;
      int e = size - 1;
      int ans = -1;
      while(s<=e){
          int mid = s + (e-s)/2;
          if(arr[mid] == key){
              ans = mid;
              e = mid - 1; // checking if the ans is in lefter half(leftmost occurence)
          }
          else if(key > arr[mid]){
            s = mid + 1;
          }
          else{
            e = mid-1;
          }
      }
      return ans;
}

int rightMostOccurrence(int arr[], int size, int key){
    int s = 0;
    int e = size - 1;
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1; // checking if the ans is in righter half(rightmost occurrence)
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}

int main(){
    // binary search algorithm
    // NOTE: array needs to be sorted(monotonic order)(we will consider in ascending order)

    // time complexity of binary search: O(log(n))

    int even[6] = {2, 3, 4, 7, 8, 9};
    int odd[5] = {1, 3, 5, 6, 7};

    cout << binarySearch(even, 6, 4) << endl; // returns index
    cout << binarySearch(odd, 5, 7) << endl;


    /*
     APPLICATIONS OF BINARY SEARCH
     */

    // finding the first and last occurrence of a sorted array

    int arr[] = {1, 2, 3, 3, 3, 3, 5, 6, 9};
    cout << leftMostOccurrence(arr, size(arr), 3) << endl;
    cout << rightMostOccurrence(arr, size(arr), 3) << endl;

    return 0;
}