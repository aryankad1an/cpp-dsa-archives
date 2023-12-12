//
// Created by Aryan Kadian on 11/12/23.
//
#include <iostream>

using namespace std;
int main() {

    /*
     SOME GOOD PATTERNS
     */

    /*
     PATTERN 1

     1 2 3 4
     1 2 3 4
     1 2 3 4
     1 2 3 4

     */

    for (int i = 1; i <= 4; ++i) {
        for (int j = 1; j <= 4; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    /*
     PATTERN 2
     1
     2 2
     3 3 3
     4 4 4 4
     */

    for (int i = 1; i <= 4; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << endl;

    /*
     PATTERN 3
        1
       121
      12321
     1234321
     */

    int seed = 4;
    for (int i = 1; i <= seed; ++i) {
        for (int j = seed-i; j > 0 ; --j) {
            cout << " ";
        }
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }
        for (int j = i-1; j >= 1 ; --j) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
