#include <iostream>

using namespace std;
int main() {
    // int main is always the entrypoint of C++ program
    cout << "Namaste Duniya" << endl;

    // concept of data types helps the compiler to differentiate 4 characters(4 bytes) from 1 int(4 bytes too)

    unsigned int a = -1;
    cout << a << endl;
    // here the value of a has been stores as negative(2's compliment) but when it is displayed it has not been converted back
    // thus we get a really weird result(refer to screenshot for explanation)
    return 0;
}
