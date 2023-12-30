#include<iostream>
#include<vector>

using namespace std;
int main(){
    // reversing an array

    {
        int arr[] = {11, 7, 3, 12, 4, 69};
        int start = 0;
        int end = size(arr) - 1;
        while(start <= end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        for(auto i: arr){
            cout << i << " ";
        }
        cout << endl;
    }

    // merge two sorted arrays
    {
        int arr1[5] = {1, 3, 5, 7, 9};
        int arr2[3] = {2, 4, 6};
        int arr3[8] = {0};
        int i=0, j=0, k=0;
        // DO LEETCODE PROBLEM 88 IF YOU SEE
        while(i<size(arr1)&&j<size(arr2)){
            if(arr1[i] < arr2[j]){
                arr3[k] = arr1[i];
                k++;
                i++;
            }
            else{
                arr3[k] = arr2[j];
                k++;
                j++;
            }
        }
        // since the two arrays are unequal, the loop will break with extra elements of the larger array left untouched
        // however that can be identified by variable i and j
        while(i<size(arr1)){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        while(j<size(arr2)){
            arr3[k] = arr2[j];
            k++;
            j++;
        }
        for (int i:arr3) {
            cout << i << " ";
        }
        cout << endl;
    }

    // move zeroes
    {
        // {1, 0, 3, 2, 0, 0, 0} -> {1, 3, 2, 0, 0, 0 ,0}
        int arr[] = {1, 0, 3, 2, 0, 0, 0};
        int i = 0;
        for (int j = 0; j < size(arr); ++j) {
            // dry run to understand the algorithm easily :)
            if(arr[j] != 0){
                swap(arr[j], arr[i]);
                i++;
            }
        }
        for (int a: arr) {
            cout << a << " ";
        }
        cout << endl;
    }

    // add 2 arrays: {1, 2, 3, 4}
    //                    +   {4}
    //              ={1, 2, 3, 8}
    {
        vector<int> a1 = {2, 4, 6, 8};
        vector<int> a2 = {9, 2, 4, 1};
        vector<int> ans;
        int n = a1.size();
        int m = a2.size();


        int i = n-1;
        int j = m-1;
        int carry = 0;
        while(i>=0 && j>=0){
            int val1 = a1[i];
            int val2 = a2[j];
            int sum = val1 + val2 + carry;

            carry = sum/10;
            sum = sum%10;

            ans.push_back(sum);
            i--;
            j--;
        }
        // if a1's elements are left
        while(i>=0){
            int sum = a1[i] + carry;
            carry = sum/10;
            sum = sum%10;
            ans.push_back(sum);
            i--;
        }
        // if a2's elements are left
        while(j>=0){
            int sum = a2[j] + carry;
            carry = sum/10;
            sum = sum%10;
            ans.push_back(sum);
            j--;
        }
        // carry is left
        while(carry != 0){
            int sum = carry;
            carry = sum/10;
            sum = sum%10;
            ans.push_back(sum);
        }
        // ans.begin() -> forward iterator :)
        // ans.end() -> backward iterator :)
        reverse(ans.begin(), ans.end());

        for (int an : ans) {
            cout << an << " ";
        }
        cout << endl;

    }

    return 0;
}