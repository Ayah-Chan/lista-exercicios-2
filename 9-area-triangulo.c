#include <stdio.h>
#include <stdlib.h>

void main() {
    float a, b;

    printf("Digite a base:\n");
    scanf("%f", &a);

    printf("Digite a altura:\n");
    scanf("%f", &b);

    float area = a * b / 2.0;

    printf("Area: %f\n", area);
}

