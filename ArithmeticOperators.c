#include <stdio.h>

int main(){

    //  +   addition
    //  -   subsctraction
    //  *   multiplication
    //  /   division
    //  %   modulus
    //  ++  increment
    //  --  decrement

    int x = 5;
    int y = 2;

    // int z = x - y;

    // If we're dividing integers and the result has a decimal portion, we'll lose it because it gets truncated. We can cast a variable to divide an integer.

    float z = x / (float) y;

    // Modulus gives the reminder of a division

    float whatever = x % y;



    printf("Result is: %f\n", whatever);

    return 0;
}