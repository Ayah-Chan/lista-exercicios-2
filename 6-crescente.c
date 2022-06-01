#include <stdio.h>
#include <stdlib.h>

void main() {
    int lista[10];

    printf("Digite dez numeros:\n");

    int i;
    for (i = 0; i < 10; i++) {
        int n;
        scanf("%d", &n);

        lista[i] = n;
    }

    for (i = 0; i < 10; i++) {
        int j;

        for (j = i + 1; j < 10; j++) {
            if (lista[i] > lista[j]) {
                int troca = lista[i];
                lista[i] = lista[j];
                lista[j] = troca;
            }
        }
    }

    printf("Resultado:\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", lista[i]);
    }
}

