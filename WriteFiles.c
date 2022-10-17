#include <stdio.h>

int main(){

    //w write
    //a append
    //r read

    // FILE *pF = fopen("text.txt", "w");

    // fprintf(pF, "\nSpongebob Squarepants");    
    // fclose(pF);

    FILE *pF = fopen("text.txt", "r");

    char buffer[255];
    fgets(buffer, 255, pF);

    printf("%s", buffer);


    fclose(pF);


    // if(remove("text.txt") == 0){
    //     printf("File deleted successfully");
    // }
    // else{
    //     printf("File couldn't be deleted");
    // }

    return 0;
}