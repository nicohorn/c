#include <stdio.h>
#include <string.h>

struct Student{
    char name[12];
    float gpa;
};

int main(){

    struct Student student1 = {"Nico", 5.0};
    struct Student student2 = {"Mati", 3.0};
    struct Student student3 = {"Alex", 4.0};
    struct Student student4 = {"Facu", 2.5};

    struct Student students[] = {student1, student2, student3, student4};

    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++){

        printf("%s", students[i].name);
        printf("%8.2f\n", students[i].gpa);

    }



    return 0;
}