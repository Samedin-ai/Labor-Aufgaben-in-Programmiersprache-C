#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int k;
    if (scanf("%d", &k) != 1 || k < 0) return 1;
    for (int i = 0; i < k; ++i) {
        if (i % 2 == 0) putchar('*'); else putchar('_');
    }
    putchar('\n');
    return 0;
}
