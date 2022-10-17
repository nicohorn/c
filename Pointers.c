#include <stdio.h>

void printAge(int *pAge){
    printf("You are %d years old\n", *pAge);
}

int main(){

    /* pointer = a [variable-like] reference that holds a memory address to another variable, some tasks
                 some tasks are performed more easily with pointer
                 * = indirection operator (value at address) 

                 Advantages of using pointers:
                 -Less time in program execution.
                 -Working on the original variable.
                 -With the help of pointers, we can create data structures (linked-list, stack, queue).
                 -Returning more than one value from functions.
                 -Searching and sorting large data very easily.
                 -Dinamically memory allocation.
*/

    int age = 21;

    //The pointer has to be the same data type as the variable its pointing to.

    int *pAge = &age; 

        // printf("Address of age: %p\n", &age);
        // printf("Value of pAge: %p\n", pAge);

    // to print the VALUE of the variable a pointer is pointing to:
        // printf("Value of pAge variable: %d\n", *pAge); // Dereferencing

        // printf("Size of age: %d bytes \n", sizeof(age));
        // printf("Size of pAge: %d bytes\n", sizeof(pAge));


    printAge(pAge);


    return 0;
}