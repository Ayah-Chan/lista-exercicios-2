#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int mmc(int a, int b) {
    return a * b / mdc(a, b);
}

void main() {
    int a, b;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &a, &b);

    int r = mmc(a, b);

    printf("MMC entre %d e %d = %d\n", a, b, r);
}
