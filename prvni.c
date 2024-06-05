
#include <stdio.h>

#define JEDNA 1

int promena = JEDNA;
char znak = '@';
char stejnej_znak /* komentař */ = 64;
unsigned long nijak;



int add(int a, int b) { return a + b + JEDNA; }
int main(void) {
    printf("Ahoj světe\n");
    printf("Size of char: %d\n", (int)sizeof(znak));
    printf("Size of short: %d\n", (int)sizeof(short));
    printf("Size of int: %d\n", (int)sizeof(int));
    printf("Size of long: %d\n", (int)sizeof(long));
    printf("Size of long long: %d\n", (int)sizeof(long long));

    printf("a = %d, b = %d\n", 14, 77);
    printf("a = %X, b = %X\n", 14, 77);
    promena = 1000000;
    int nijak = 99999;
    promena = (long)promena * nijak / 99999;
    printf("cislo: %d\n", promena);

    int i = 0;
    while (i++ < 15) {
        printf("%d ", i);
    }
    printf("\n");
    i = 15;
    do {
        printf("%d ", i);
    } while (i-- > 0);
    printf("\n");
    
    for (i=0; i<10 && i>0; i++) {
        printf("%d ", i);
    }
    printf("\n");

    znak = 0;
    printf("%d\n", 12 & 4);


    int pole[10];
    int a=22,b=44;
    pole[1] = 5;
    pole[4] = 14;

    int* ukazatel;
    ukazatel = &a;
    ukazatel = pole;

    for (i=0; i<10; i++) {
        printf("%d ", pole[i]);
    }
    printf("\n%d\n", pole[13]);

    char retezec[50] = "ahoj nazdar cau";
    char* zacatek = retezec;
    i = 0;
    while ( retezec[i] != '\0') {
        printf("%c", retezec[i++]);
    }
    printf("%s\n", retezec);

    return 0;
}
// #include <stdio.h>

// #define JEDNA 1 // nahrazeni Jedna cislem 1 

// int promena = 0; 
// char znak = '@';
// char stejnej_znak /* komentař */ = 64;
// unsign long nijak; // bez znamenka 0-255
// sign long nijak; // se znamenkem  -128 - 127

// int add(int a, int b) {
//     return a + b + JEDNA;
// }

// int main(void) {
//     printf("Ahoj světe\n");
//     printf("Size of char: %d\n", (int)sizeof(char)); // sizeof - kolik bajtu obsahuje promenna
//     printf("Size of short: %d\n", (int)sizeof(short));
//     printf("Size of int: %d\n", (int)sizeof(int));
//     printf("Size of long: %d\n", (int)sizeof(long));
//     printf("Size of long long: %d\n", (int)sizeof(long long)); // %d = na toto misto mi napis dekadicke cislo


//     int i = 0;
//     while (i<15) {
//         printf("%d", i);
//         i = i+1;
//         }
//     return 0;
// }