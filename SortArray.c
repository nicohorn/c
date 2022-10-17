#include <stdio.h>


void sort(int array[], int size){

    //Bubble sort

    for(int i = 0; i < size - 1; i++){

        for(int j = 0; j < size - i - 1; j++){
            
        if(array[j] > array[j+1]){
            //Usage of a temporary variable to swap the value of j and j+1.
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
        }   
     }
    }
}

void printArray(int array[], int size){

    for(int i = 0; i < size; i++){
        printf("%d\n", array[i]);
    }

}

int main(){

    int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5, 33, 423, 2, 11, 32, 412, 123, 2, 543, 645, 123, 23, 653, 99};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    printArray(array, size);


    return 0;
}