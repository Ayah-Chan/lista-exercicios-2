#include <stdio.h>
#include <stdlib.h>

void main() {
    float lado1, lado2, lado3;

    printf("Digite o tamanho de cada lado:\n");
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    if (lado1 == lado2 && lado1 == lado3) {
        printf("O triangulo eh equilatero\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("O triangulo eh isoceles\n");
    } else {
        printf("O triangulo eh escaleno\n");
    }
}
