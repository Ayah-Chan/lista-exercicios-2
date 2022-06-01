#include <stdio.h>
#include <stdlib.h>

void main() {
    int a, b;

    printf("Digite o primeiro ano:\n");
    scanf("%d", &a);

    printf("Digite o segundo ano:\n");
    scanf("%d", &b);

    int total = 0;
    int ano;

    for (ano = a; ano <= b; ano++) {
        if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
            total += 1;
        }
    }

    printf("Total %d anos bissextos\n", total);
}

