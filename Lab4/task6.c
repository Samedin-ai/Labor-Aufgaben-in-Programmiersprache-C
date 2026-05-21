#include <stdio.h>

int stringlength(char test[]) {
    int Zeichen;
    
    while(test[Zeichen] != '\0') {
        Zeichen++;
    }
    return Zeichen;
}

int main() {
    char test[] = "Hochschule Esslingen";
    printf("%s hat %d Zeichen", test, stringlength(test));
    return 0;
}