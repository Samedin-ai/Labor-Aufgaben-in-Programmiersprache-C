#include <stdio.h>

int prime(int zahl) {
    if(zahl < 2) return 0;
    for(int i = 2; i * i <= zahl; i++) {
        if(zahl % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    printf(prime(1) ? "Primzahl" : "KEINE Primzahl");
    return 0;
}