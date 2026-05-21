#include <stdio.h>

void toUpper(char array[]) {
    int i;
    for(i = 0; array[i] != '\n'; i++) {
        if(array[i] >= 'a' && array[i] <= 'z') {
            array[i] = array[i] - 32;
        }
    }
}

int main() {
    char arr[] = "Hallo Welt";
    toUpper(arr);
    printf("%s\n", arr);

    return 0;
}