#include <stdio.h>
#include <string.h>

/* struct = collection of related members ("variables")
            they can be of different data types
            listed under on name in a block of memory
            very similar to classes in other languages (but no methods) */

 struct Player {
    char name[12];
    int score;
 };           

int main(){

    struct Player player1;
    struct Player player2;
    struct Player player3 = {"Alex", 4};
    
    //dot is a memeber access operator
    //since name is an array of characters, we need to make use of the strcpy function.

    strcpy(player1.name, "Nico");
    player1.score = 4;

    strcpy(player2.name, "Mati");
    player2.score = 6;



    printf("%s ", player1.name);
    printf("%d\n", player1.score);

    printf("%s ", player2.name);
    printf("%d\n", player2.score);

    printf("%s ", player3.name);
    printf("%d\n", player3.score);

    return 0;
}          