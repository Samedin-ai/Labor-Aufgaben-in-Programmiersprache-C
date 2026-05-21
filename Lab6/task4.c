#include <stdio.h>

void append(char buffer[], char rest[]) {
    int i = 0;
    int j = 0;

    while(buffer[i] != '\0') {
        i++;
    }

    while(rest[j] != '\0') {
        buffer[i] = rest[j];
        i++;
        j++;
    }
    buffer[i] = '\0';
}

int main() {
    char buffer[40] = "Hallo ";
    append(buffer, "Welt");
    printf("%s\n", buffer);

    return 0;
}