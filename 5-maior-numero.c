#include <stdio.h>
#include <stdlib.h>

void main() {
    int maior = 0;

    printf("Digite dez numeros:\n");

    int i;
    for (i = 0; i < 10; i++) {
        int n;
        scanf("%d", &n);

        if (n > maior) {
            maior = n;
        }
    }

    printf("Maior numero: %d\n", maior);
}

