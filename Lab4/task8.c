#include <stdio.h>

double bmi(double kg, double height) {
    double bmi;
    bmi = kg / (height*height/10000);
    return bmi;
}

int main() {
    printf("%dkg und %fm = %.2lf", 85, 1.5, bmi(85, 150));
    return 0;
}