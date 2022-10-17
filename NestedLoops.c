#include <stdio.h>

int main(){

    int rows;
    int columns;
    char symbol;

    printf("\nEnter # of rows: ");
    scanf("%d", &rows);

    printf("\nEnter # of columns: ");
    scanf("%d", &columns);

    scanf("%c"); // this line is to clean the buffer

    printf("\nEnter a symbol: ");
    scanf("%c", &symbol);



    for(int i = 1; i <= rows; i++){
            printf("\n");
        for(int j = 1; j <= columns; j++){
            printf("%c ", symbol);
        }
    }


    return 0;
}