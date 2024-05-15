#include <stdio.h>

#define JEDNA 1 // nahrazeni Jedna cislem 1 

int promena = 0; 
char znak = '@';
char stejnej_znak /* komentař */ = 64;
unsign long nijak; // bez znamenka 0-255
sign long nijak; // se znamenkem  -128 - 127

int add(int a, int b) {
    return a + b + JEDNA;
}

int main(void) {
    printf("Ahoj světe\n");
    printf("Size of char: %d\n", (int)sizeof(char)); // sizeof - kolik bajtu obsahuje promenna
    printf("Size of short: %d\n", (int)sizeof(short));
    printf("Size of int: %d\n", (int)sizeof(int));
    printf("Size of long: %d\n", (int)sizeof(long));
    printf("Size of long long: %d\n", (int)sizeof(long long)); // %d = na toto misto mi napis dekadicke cislo


    int i = 0;
    while (i<15) {
        printf("%d", i);
        i = i+1;
        }
    return 0;
}
