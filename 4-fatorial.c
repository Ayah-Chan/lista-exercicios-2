#include <stdio.h>
#include <stdlib.h>

void main() {
    int n;

    printf("Digite o numero pra calcular o fatorial:\n");
    scanf("%d", &n);

    int resultado = 1;

    int i;
    for (i = n; i > 1; i--) {
        resultado = resultado * i;
    }

    printf("O fatorial de %d eh %d\n", n, resultado);
}
