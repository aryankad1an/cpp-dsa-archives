#include<iostream>

using namespace std;
int main(){
    // converting decimal to binary

    // approach 1
    /*
     * Divide by 2
     * concat remainder in answer
     * Repeat step 1 until number is 0
     * reverse the answer
     */

    // approach 2
    /*
     * Repeat these until n!=0
     * Last bit = n&1 (and operation)
     * n = n>>1 (right shifting)
     * store the bits in the answer
     * do some operations on it to get final answer(see the implementation)
     */

    // implementation 2
    int ans = 0;
    int n;
    cin >> n;
    if(n>0){
        for (int i = 0;n!=0; ++i) {
            int bit = n&1;
            ans = (bit * pow(10, i)) + ans;
            n = n >> 1;
        }
        cout << "Binary Representation: " << ans << endl;
    }
    else{
        // handling negative nmber

        // do when you see
    }

    // converting binary to decimal

    int binary;
    cin >> binary;
    int ans2 = 0;
    for (int i = 0; binary!=0; ++i) {
        int digit = binary%10;
        if (digit==1)
            ans2+=pow(2,i);
        binary = binary / 10;
    }
    cout << "Decimal Representation: " << ans2 << endl;

}