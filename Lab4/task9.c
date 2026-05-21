#include <stdio.h>

float celsius(float Fahrenheit) {
    float celsius;
    celsius = ((Fahrenheit - 32) *5 / 9);
    return celsius;
}

int main() {
    printf("%dF = %.1fC", 20, celsius(20));
    return 0;
}