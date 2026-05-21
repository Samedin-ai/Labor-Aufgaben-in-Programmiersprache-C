#include <stdio.h>

int main(void) {
    int c;
    printf("Celsius Fahrenheit\n");
    for (c = -20; c <= 300; c += 20) {
        int f = (c * 9) / 5 + 32;
        printf("%7d%11d\n", c, f);
    }
    return 0;
}
