#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* pseudo random numbers = A set of values or elements that are statiscally random
                           (not safe for any sort of cryptographic security) */


int main(){

    srand(time(0)); //Seed to generate a random number (using the current time);

    int number1 = (rand() % 6) + 1; // the rand function gives a randome number between 0 and 32/767, using modulus we can truncate the max value;
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;
    int number4 = (rand() % 6) + 1;
    int number5 = (rand() % 6) + 1;
    int number6 = (rand() % 6) + 1;

    printf("%d ", number1);
    printf("%d ", number2);
    printf("%d ", number3);
    printf("%d ", number4);
    printf("%d ", number5);
    printf("%d ", number6);

    return 0;
}