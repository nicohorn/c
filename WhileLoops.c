#include <stdio.h>
#include <string.h>

int main(){

    // while loop = repeats a section of a code possibly unlimited times.
    // while some condition remains true
    // a while loop might no execute at all


    char name[25];

    printf("\nWhat's your name? ");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0'; //this line is to remove the line break that gets added by default with fgets

    while(strlen(name) == 0){
         printf("\nWhat's your name? ");
        fgets(name, 25, stdin);
        name[strlen(name)-1] = '\0'; //this line is to remove the line break that gets added by default with fgets
    }


    printf("Hello %s", name);

    return 0;
}