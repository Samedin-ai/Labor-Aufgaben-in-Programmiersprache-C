#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define JA 1
#define NEIN 0

int main(void) {
    unsigned int note, bestanden;

    do {
        printf("\nGeben Sie bitte eine Note (1-5) ein: ");
        scanf("%u", &note);
    } while (note < 1 || note > 5);

    /* Nur eine if-else-Bedingung */
    if (note <= 4)
        bestanden = JA;
    else
        bestanden = NEIN;

    bestanden ? printf("\nOK!") : printf("\nNICHT bestanden");
    return 0;
}
