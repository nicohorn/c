#include <stdio.h>

// BITWISE OPERATORS = special operators used in bit level programming (knowing binary is important for this topic)


int main(){

    // & = AND
    // | = OR
    // ^ = XOR
    // << = left shift
    // >> = right shift

    int x = 6;  // 00000110
    int y = 12; // 00001100
    int z = 0;  // 00000000

    z = x << 6; 


    printf("Result = %d\n", z);



    return 0;
}