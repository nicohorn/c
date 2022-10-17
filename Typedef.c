#include <stdio.h>
#include <string.h>

// typedef = reserved keyword that gives an existing datatype a "nickname"

// typedef char user[25];

// struct User {
//     char name[25];
//     char password[12];
//     int id;
// }

// it can be defined in the following way too

typedef struct {
    char name[25];
    char password[12];
    int id;
} User;



int main(){
        //typedef
    // user user0 = "Bro";

        //struct
    // struct User user1 = {"Bro", "password123", 123456789};
    // struct User user2 = {"Bruh", "password321", 987654321};

        //typedef with struct
    
    User user1 = {"Bro", "password123", 123456789};
    User user2 = {"Bruh", "password321", 987654321};

    printf("%s ", user1.name);
    printf("%s ", user1.password);
    printf("%d\n", user1.id);

    printf("%s ", user2.name);
    printf("%s ", user2.password);
    printf("%d\n", user2.id);




    return 0;
}