#include <stdio.h>

/*          Function prototype
        
        Function declaration, w/o a body, before main(), ensures that calls to a function are made with the correct arguments

        Many C compilers do not check for parameter matching
        Missing arguments will result in unexpected behavior
        A function prototype causes the compiler to flag an error if arguments are missing.

        ADVANTAGES
        1. Easier to navigate a program w/ main() at the top.
        2. Helps with debugging.
        3. Commonly used in header files.

*/

void hello(char[], int); //This is a function prototype

int main(){

    char name[] = "Nico";
    int age = 24;

    hello(name, age);

    return 0;
}

void hello(char name[], int age){

    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);
    
}

