#include <stdio.h>

int main(){

    const double PI = 3.14169;
    double radius;
    double circumference;

    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;

    printf("Circumference: %lf", circumference);

    return 0;
}