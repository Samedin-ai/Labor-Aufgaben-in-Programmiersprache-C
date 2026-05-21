#include <stdio.h>

int main(void) {
    int f;
    printf("Fahrenheit      Celsius\n");
    for (f = -20; f <= 300; f += 20) {
        double c = 5.0 * (f - 32) / 9.0;
        printf("%10d%13.2f\n", f, c);
    }
    return 0;
}
