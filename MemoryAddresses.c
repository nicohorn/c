#include <stdio.h>


int main(){

    // memory = an array of bytes withing RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value (person)
    // memory address = the address of where a memory block is located (house address)

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    //Each variable is using one block of memory


    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    //To access the memory address we can do the following (the format specifier is p, and & as 'address-of' operator)
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    


    return 0;
}