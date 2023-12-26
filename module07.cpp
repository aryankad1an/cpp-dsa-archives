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

int binarySearchCustomStartEnd(int arr[], int start, int end, int key){
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

int getPivot(int arr[], int n){
    /*
     Graph of rotated array:
     |
     |
     |      9
     | [a]7
     |
     |                  3
     |              2
     |       [b]1
     |_______________________
     */

    // we are considering 1 to be pivot element
    int s = 0;
    int e = n -1;
    int mid = s + (e-s)/2;

    while(s < e){
        if(arr[mid] >= arr[0]){
            // mid lies in the line [a] (see graph)
            // this we will move start position
            s = mid + 1;
        }
        else{
            e = mid; // we are not saying e = mid-1 as it can result in problems
            // let mid is at 1, so mid-1 would be in line [a] that would ruin our answer
        }
        mid = s + (e-s)/2;
    }
    return s; // dry run to know why we returned s instead of e
}

int binarySearchRotated(int arr[], int n, int key)
{
    int pivot = getPivot(arr, n);
    if(key > arr[pivot] && key <= arr[n-1]){
        // binary search on the second line
        return binarySearchCustomStartEnd(arr, pivot, n-1, key);
    }
    else{
        // binary search on first line
        return binarySearchCustomStartEnd(arr, 0, pivot-1, key);
    }
}

int sqrtBinarySearch(int n){
    int start = 1;
    int end = n;
    int ans = -1;
    while(start <= end){
        int mid = start + (end-start)/2;
        long long int square = mid * mid;
        if(square == n)
            return mid;
        if(square < n){
            ans = mid; // this is considering that we will not consider the floating point of root, eg. 5.6 root will be treated as 5
            start = mid + 1;
        }
        else
            end = mid - 1;
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

    // total no of occureences = last index - first index + 1 (for sorted arrays only)

    // peak index of mountain array(see leetcode)

    // find pivot in an array(u will be given a sorted and rotated array as input){good imagination}

    /*
     To find a pivot, plot the sorted array in graph and find the point of non monotonicity

     array: {1, 2, 3, 7, 9}
     rotated: {7, 9, 1, 2, 3}
     Graph of original array:
     |
     |
     |                  9
     |              7
     |          3
     |      2
     |  1
     |________________________

     Graph of rotated array:
     |
     |
     |      9
     |   7
     |
     |                  3
     |              2
     |          1
     |_______________________
     */

    int a[] = {7, 9, 1000, 1, 2, 3, 4, 5};
    cout << "Pivot is at index " << getPivot(a, size(a)) << endl;

    // search in a rotated sorted array(array like above)
    cout << binarySearchRotated(a, size(a), 2) << endl;

    // square root using binary search
    cout << sqrtBinarySearch(7) << endl;

    // finding exact square root using binary search
    // do using bruteforce lol :/
    return 0;
}