#include <stdio.h>
#include <stdlib.h>

void main() {
    int n;

    printf("Digite um numero:\n");
    scanf("%d", &n);

    int i;
    int primo = 1;

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            primo = 0;
        }
    }

    if (primo == 0 || n < 2) {
        printf("%d nao e primo\n", n);
    } else {
        printf("%d e primo\n", n);
    }
}

