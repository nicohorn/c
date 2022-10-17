#include <stdio.h>

int main(){

    int age;
    char name[25];

    printf("What's your name?\t");
    //Using the scanf function will only read till the 
    //scanf("%s", &name);
    //To include a whitespace we use the following function. Variable name, size, standard input
    fgets(name, 25, stdin);

    printf("How old are you? \t");
    scanf("%d", &age);


    printf("Hello %s\n", name);
    printf("You are %d years old", age);


    return 0;
}