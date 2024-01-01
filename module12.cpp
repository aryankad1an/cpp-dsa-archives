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

    // largest row sum of 2D arrays
    {
        int max = 0;
        for(int i = 0; i < row; i++){
            int sum = 0;
            for(int j = 0; j < col; j++){
                sum += arr[i][j];
            }
            if(sum > max){
                max = sum;
            }
        }
        cout << max << endl;
    }

    // wave print of 2D array, first up in a col then down in a col then up in a col
    // time complexity: O(m*n)
    {
        /*
         [2, 3, 4]
         [5, 6, 7]
         [8, 9, 10]

         wave print => [2, 5, 8, 9, 6, 3, 4, 7, 10]
         */

        for(int j = 0; j < col; j++){
            if(j % 2 == 0){
                // from top to bottom
                for(int i = 0; i < row; i++){
                    cout << arr[i][j] << " ";
                }
            }
            else{
                // from bottom to top
                for(int i = row - 1; i >= 0; i--){
                    cout << arr[i][j] << " ";
                }
            }
        }
    }
    cout<<endl;
    cout<<"------------------"<<endl;
    // spiral print of 2D array starting from top left
    {
        /*
         [1, 2, 3]
         [4, 5, 6]
         [7, 8, 9]

         Spiral Print: [1, 2, 3, 6, 9, 8, 7, 4, 5]
         */

        int top = 0, bottom = row - 1, left = 0, right = col - 1;
        int dir = 0;
        while(top <= bottom && left <= right){
            if(dir == 0){
                for(int i = left; i <= right; i++){
                    cout << arr[top][i] << " ";
                }
                top++;
            }
            else if(dir == 1){
                for(int i = top; i <= bottom; i++){
                    cout << arr[i][right] << " ";
                }
                right--;
            }
            else if(dir == 2){
                for(int i = right; i >= left; i--){
                    cout << arr[bottom][i] << " ";
                }
                bottom--;
            }
            else{
                for(int i = bottom; i >= top; i--){
                    cout << arr[i][left] << " ";
                }
                left++;
            }
            dir = (dir + 1) % 4;
        }
    }

}