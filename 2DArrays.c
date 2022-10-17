#include <stdio.h>
#include <string.h>

int main(){

    // 2D array = an array where each element is an entire array, useful if you need a matrix, grid or table of data.

    //it's optional to initialize the number of rows but it's required to initialize the number of columns.

    int numbers[3][3] = {
                        {1,2,3},
                        {4,5,6},
                        {7,8,9}
                        };

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    char arrayOfStrings[][10] = {"Mustangops2s", "Corvette", "Camaro"};

    //to change the value of a string array, we can't assign it the following way
    //  arrayOfStrings[0] = "Tesla";
    //but instead, it's done like this
    strcpy(arrayOfStrings[0], "Tesla");

    
    for (int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < sizeof(arrayOfStrings)/sizeof(arrayOfStrings[0]); i++){
        printf("%s ", arrayOfStrings[i]);
    }

   


    return 0;
}