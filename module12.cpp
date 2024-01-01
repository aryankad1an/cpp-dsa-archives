#include<iostream>

using namespace std;
int main(){
    // 2D arrays
    // memory storage: refer to C notes

    int row, col;
    cin >> row >> col;
    int arr[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    // linear search of 2D Arrays: O(m*n) time complexity
    {
        int target;
        cin >> target;
        int found = 0;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(arr[i][j] == target){
                    cout << "row: " << i+1 << " col: " << j +1<< endl;
                    found = 1;
                }
            }
        }
        if(!found){
            cout << "Not found" << endl;
        }
    }

    // row wise sum of 2D arrays
    {
        int sum = 0;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                sum += arr[i][j];
            }
        }
        cout << sum << endl;
    }

    // col wise sum of 2D arrays
    {
        int sum = 0;
        for(int i = 0; i < col; i++){
            for(int j = 0; j < row; j++){
                sum += arr[j][i];
            }
        }
        cout << sum << endl;
    }



}