#include <stdio.h>

int main(){

    // array = data structure that can store many values of the same data type;

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};

    double prices2[6];

    prices2[0] = 12.50;
    prices2[1] = 15.85;
    prices2[2] = 3.15;
    prices2[3] = 6.30;
    prices2[4] = 126.50;
    prices2[5] = 65.50;

    //printf("$%.2lf", prices2[4]);

    for (int i = 0; i < sizeof(prices2)/sizeof(prices2[0]); i++){
        printf("%.2lf\n", prices2[i]);
    }


    return 0;
}