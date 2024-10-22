#include <stdio.h>

void muuta_lukua(int *x);

int main() {
    int x;
    printf("Anna luku x:");
    scanf("%d", &x);
    printf("Pää ohjelmassa: x = %d\n", x);
    muuta_lukua(x);
    printf("Pää ohjelmassa: x = %d\n", x);
    return 0;
}

void muuta_lukua(int *x) {
    *x += 3;
    printf("Aliohjelmassa: x = %d\n", *x);
}