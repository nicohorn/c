#include <stdio.h>
#include <string.h>

int main(){

    char x = 'X';
    char y = 'Y';
    char temp;

    temp = x;
    x = y;
    y = temp;


    printf("x = %c\n", x);
    printf("y = %c\n", y);

     //Whe working with arrays of characters (strings) swapping variables it's done the following way.
    
    char stringX[15] = "water";
    char stringY[15] = "lemonade";
    char tempS[15];

    strcpy(tempS, stringX);
    strcpy(stringX, stringY);
    strcpy(stringY, tempS);
    printf("x = %s\n", stringX);
    printf("y = %s\n", stringY);


    return 0;
}