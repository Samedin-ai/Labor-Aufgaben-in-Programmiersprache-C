#include <stdio.h>

void ownStrcpy(char copiedString[], char originalString[]) {
    int i = 0;
    while(originalString[i] != '\0') {
        copiedString[i] = originalString[i];
        i++;
    }
    copiedString[i] = '\0';
}

int main() {
    char originalString[] = "Programmieren";
    char copiedString[40];
    ownStrcpy(copiedString, originalString);
    printf("%s", copiedString);

    return 0;
}