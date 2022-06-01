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

void main() {
    int a, b;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &a, &b);

    int r = mdc(a, b);

    printf("MDC entre %d e %d = %d\n", a, b, r);
}
