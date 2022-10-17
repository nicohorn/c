#include <stdio.h>

int main(){

    // continue = skip rest of code & forces next iteration of the loop
    // break = exits a loop / switch

    for (int i = 1; i<= 20; i++){

        if(i == 13){
            continue;
        }

        printf("%d\n", i);

    }

    for (int i = 1; i<= 20; i++){

        if(i == 13){
            break;
        }

        printf(" %d\n", i);

    }



    return 0;
}