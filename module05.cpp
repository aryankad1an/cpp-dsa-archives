#include <iostream>

int main(){
    // switch-case and functions
    // refer to C++ core

    // Function call Stack

    /*
     as the functions are called, they are stored in a stack like structure
     the first function to be called is main function, so it will be the first to be inside a stack
     the functions will be destroyed based on LIFO principle.

     |Func3 |    <-- first to be out, last to be in
     |Func2 |
     |Func1 |
     |Main  |
     ________
     */


    // call by value: see core notes :)



    // arrays in C++
    // array is {continuous memory allocated} collection of data
    // refer to C++ core
    int arr_2[10]; // all the values initialised as garbage walue
    int arr[10] = {0}; // all the values initialised as zero
    return 0;
}