#include<iostream>

int main(){
    // bitwise operators: operations on bits(convert decimal to bits then operate then convert the result back to decimal)
    // AND(&)/OR(|)/NOT(~): Works Normally
    /*
     XOR Operator(^)
        0^1:1
        0^0:0
        1^1:0
        1^0:1
     */

    /*
     a = 4 -> 0000..000100
    ~a = 1111..111011, since first digit is 1, it is treated as negative number
     [finding the negative number]
    ~a's 1s Compliment: 0000..000100
    ~a's 2s Compliment: 0000..000100 + 1 = 0000..000101
    thus ~a = -(0000..000101) = -5
    thus ~4 = -4
     */

    return 0;
}