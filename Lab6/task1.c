#include <stdio.h>

int minimum(int numbers[], int size) {
    int min = numbers[0];
    for(int i = 0; i < size; i++) {
        if(numbers[i] < min){
            min = numbers[i];
        }
    }
    return min;
}

int main() {
    int num[] = {4, 6, 9, 5};
    printf("%d", minimum(num, 4));
    return 0;
}