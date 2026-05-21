#include <stdio.h>

float triangleArea(float height, float width) {
    float result;
    result = (height * width)/2.00;
    return result;
}

int main() {
    printf("%.2f", triangleArea(3, 4));
    return 0;
}