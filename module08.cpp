#include<iostream>

using namespace std;
void selectionSort(int* arr, int n){
    for (int i = 0; i < n; ++i) {
        int minIndex = i;
        for (int j = i+1; j <n ; ++j) {
            if(arr[j] < arr[minIndex])
                minIndex=j;
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main(){

    // sorting algorithms

    // selection sort

    int arr[] = {6, 8, 9, 4, -3};
    selectionSort(arr, size(arr));
    for (int i : arr) {
        cout<<i<<" ";
    }
    cout << endl;


    return 0;
}