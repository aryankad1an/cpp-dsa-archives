#include<iostream>

using namespace std;
void selectionSort(int* arr, int n){ // ascending order
    for (int i = 0; i < n; ++i) {
        int minIndex = i;
        for (int j = i+1; j <n ; ++j) {
            if(arr[j] < arr[minIndex])
                minIndex=j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

void bubbleSort(int* arr, int n){
    // in every ith round, we will place ith largest element in the ith right position(ascending order sort)
    for (int i = 1; i < n; ++i) {
        bool swapped = false;

        // round 1 to round n-1
        for (int j = 0; j < n-i; ++j) { // the ith rightest element is already sorted lmao
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }

    }
}

int main(){

    // sorting algorithms

    // selection sort

    int arr[] = {6, 8, 9, 4, -3};
//    selectionSort(arr, size(arr));
    for (int i : arr) {
        cout<<i<<" ";
    }
    cout << endl;

    // space complexity: O(1) [no extra variables created]
    // time complexity(worst case): O(n^2) [nested for loop]
    // best case time complexity: O(n^2) [we will still do the comparisons, no matter the new variables created]

    // use case: small array size

    // Bubble Sort Algorithm
    bubbleSort(arr, size(arr));
    for (int i : arr) {
        cout<<i<<" ";
    }
    cout << endl;

    // time complexity(worst case): O(n^2)
    // space complexity: O(1)
    // best case time complexity: O(n) [after optimizing step with boolean]

    return 0;
}