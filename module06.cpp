#include<iostream>
#include<vector>

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

int duplicateElementFromArray(int arr[], int size){
    /*
     According to the problem statement
     if the size of array is n we can xor the array with numbers from 1...n-1
     the resultant left will be out answer

     as:
     (1^2^3^4....^D^...n-1^D)^(1^2^3^4....^D^...n-1) equals
     1^1^2^2^3^3....^D^D^...^(n-1)^(n-1)^D equals
     D
     */
    int ans = 0;
    for (int i = 0; i < size; ++i) {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i <= size-1; ++i) {
        ans = ans ^ i;
    }
    return ans;
}

vector<int> intersectionOfArrays(int arr1[], int arr2[], int size1, int size2){
    vector<int> ans;
    int i = 0; int j = 0;

    /*
     EXAMPLE:
     {3, 3, 3, 3, 4 ,5 ,6 } ⋂ {1 , 2, 3, 3} = {3, 3}
     */

    // two pointer approach of this problem
    while(i<size1 && j<size2){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;j++; // to prevent duplicate result
        }
        else if(arr1[i] < arr2[j]){
            i++; // as arrays are sorted and there is no need to check more elements if its smaller than the smaller element
        }
        else{
            j++; // same reason as above
        }
    }
    return ans;
}

int main(){
    int nums[5] = {3, 4, 5, 6, 2};
    printArray(nums, size(nums));

    cout << "---" << endl;
    // note that there is always call by reference for arrays
    // it is because when we pass the arrays to function, we actually pass the address of first element dawg


    // reversing an array
    reverseArray(nums, 5);
    printArray(nums, 5);

    cout << "---" << endl;

    // finding unique in an array with duplicates in pairs
    int findUnique[] = {4, 5, 5, 3, 4, 3, 69};
    cout << uniqueElementFromArray(findUnique, 7) << endl;

    cout << "---" << endl;

    // finding duplicates in arrays(of size n) where there is every element from the set of natural numbers [1, n-1] and one of the element is duplicated
    int findDuplicate[] = {1, 2, 3, 4, 5, 6, 4};
    cout << duplicateElementFromArray(findDuplicate, size(findDuplicate)) << endl;

    cout << "---" << endl;
    // intersection of 2 arrays(common elements) (both arrays are sorted)
    int arr1[] = {1,2,3};
    int arr2[] = {3, 4};
    vector<int> intersection = intersectionOfArrays(arr1, arr2, size(arr1), size(arr2));
    for (int i = 0; i < size(intersection); ++i) {
        cout << intersection[i] << " ";
    }
    cout << endl;

    return 0;
}