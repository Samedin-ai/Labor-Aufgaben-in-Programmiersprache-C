#include <stdio.h>

int main(void) {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2) return 0;
    if (rows <= 0 || cols <= 0) return 0;

    int r = 0;
    while (r < rows) {
        int c = 0;
        while (c < cols) {
            /* Wenn (r+c) gerade ist, '+' sonst '-' */
            if ((r + c) % 2 == 0) putchar('+');
            else putchar('-');
            c++;
        }
        putchar('\n');
        r++;
    }
    return 0;
}
