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

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        int temp = arr[i];   // Store the current element to be compared (key)
        int j = i-1;
        for (; j >= 0 ; --j) {
            if(arr[j] > temp){
                // shift to make gap for temp
                arr[j+1] = arr[j];
            }
            else{
                // rukjao
                break;
            }
        }
        // fill the gap(note the j-- in for loop)
        arr[j+1] = temp;

    }
    /*
     Initial Array:
        {12, 11, 13, 5, 6}

    Step 1:
        The first element is considered sorted by default, so we start with index i = 1.

        key = arr[1] = 11
        j = i - 1 = 0
        Now, we compare key (11) with the element before it (12). Since 12 is greater than 11, we shift 12 one position to the right to make space for the key.

        Array after the first iteration:
        {11, 12, 13, 5, 6}

    Step 2:
        Move to the next element (i = 2).

        key = arr[2] = 13
        j = i - 1 = 1
        We compare key (13) with the element before it (12). 12 is smaller than 13, so no need to shift elements.

        Array after the second iteration:
        {11, 12, 13, 5, 6}

    Step 3:
        Move to the next element (i = 3).

        key = arr[3] = 5
        j = i - 1 = 2
        We compare key (5) with 13, 12, and 11. All these elements are greater than 5, so we shift them one position to the right to make space for the key.

        Array after the third iteration:
        {5, 11, 12, 13, 6}

    Step 4:
        Move to the next element (i = 4).

        key = arr[4] = 6
        j = i - 1 = 3
        We compare key (6) with 13, 12, and 11. Similar to the previous step, we shift these elements to the right to make space for the key.

        Array after the fourth iteration:
        {5, 6, 11, 12, 13}

    Final Sorted Array:
    The array is now fully sorted in ascending order:
    {5, 6, 11, 12, 13}
     */
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
//    bubbleSort(arr, size(arr));
    for (int i : arr) {
        cout<<i<<" ";
    }
    cout << endl;

    // time complexity(worst case): O(n^2)
    // space complexity: O(1)
    // best case time complexity: O(n) [after optimizing step with boolean]


    // insertion sort
    insertionSort(arr, size(arr));
    for (int i : arr) {
        cout<<i<<" ";
    }
    cout << endl;
    // time complexity: O(n^2)
    // space complexity: O(1)
    // best case complexity: O(n)
    return 0;
}