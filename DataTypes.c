#include <stdio.h>
#include <stdbool.h>

int main(){

    char a = 'C';                           // single character, simple quotes %c
    char b[] = "Bro";                       // array of characters, double quotes %s

    float c = 3.141592;                     // 4 bytes (32 of precision) 6 - 7 digits %f
    double d = 3.141592653589793;           // 8 bytes (64 of precision) 15 - 16 digits %lf

    bool e = true;                          // 1 byte %d

    char f = 120;                           // 1 byte (-128 to 127 (ASCII)) %d or %c

                                            /*Keyword "unsigned" is to prevent storing negative values.
                                            the keyword "signed" also exists but variables are signed by default */

    unsigned char f = 120;                  // 1 byte (0 to 255)  %d or %c

                                            //We can declare short ints without the keyword "int" using just "short"
    short int h = 32767;                    // 2 bytes (-32768 to 32767) %d
    unsigned short int h = 65535;           // 2 bytes (0 to 65353) %d

    int j = 2147483647;                     // 4 bytes (-2.147.483.648 to 2.147.483.647) %d
    unsigned int k = 2147483647;            // 4 bytes (0 to 4.294.967.295) %u

    long long int l = 9223372036854775807   // 8 bytes (-9.223.372.036.854.775.807 to 9.223.372.036.854.775.807) %lld
    unsigned long long int = 18446744073709551615; // 8 bytes (0 to 18.446.744.073.709.551.615) %llu

    printf("%c",f);

    return 0;
}