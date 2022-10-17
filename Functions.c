#include <stdio.h>

// A function is a small portion of code that it's excecuted when it's called: invoking a function.

void birthday(){
    printf("\n Happy birthday to you!");
    printf("\n Happy birthday to you!");
    printf("\n Happy birthday dear... YOU!");
    printf("\n Happy birthday to you!");
}

void birthdayWithName(char name[], int age){
    printf("\n Happy birthday dear %s!", name);
    printf("\n You are %d years old!", age);
 
}

double square(double x){
    return x * x;
}

int findMax(int x, int y){

    // ternary operator = shortcut to if/else when assigning/returning a value (condition) ? value if true  : value if false

    return (x > y) ? x : y;

}

int main(){

    char name[] = "Nico";
    int age = 24;

    double x = square(3.125);
    int max = findMax(3,4);

   
    printf("%.3f, %d", x, max);

  

    //birthdayWithName(name, age);

    return 0;
}