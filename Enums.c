#include <stdio.h>

/* enum = a user friendly type of named integer identifiers
          helps to make a program more readable */

// they're treated as integers and not strings
enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};


int main(){

    enum Day today = Mon;

    if (today == Sun || today == Sat){
        printf("It's the weekend!");
    }
    else{
        printf("I gotta work");
    }


    return 0;
}