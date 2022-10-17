#include <stdio.h>

/*
    variable =    Allocated spaces in memory to store a value.
                  We refer to a variable's name to access the stored value.
                  That variable now behaves as if it was the value it contains.
                  We need to declare what type of data we are storing.
*/

int main(){
    
    int x; //declaration
    
    x = 123; //initialization
   
    int y = 321;  //declaration + initialization

    int age = 21; // integer
    float gpa = 2.05; // floating point number
    char grade = 'A'; // single character

    // Since C is not an object oriented programing language, there's not a string data type since it's technically an object. The way to represent a string is the following.

    char name[] = "Bro"; // array of characters

    //To print a variable, we can place a format specifier, in this case, % and d (decimal).
    printf("You are %d years old \n", age);
    printf("Hello %s", name);

    return 0;
}