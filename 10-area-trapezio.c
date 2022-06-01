#include <stdio.h>
#include <stdlib.h>

void main() {
    float a, b, h;

    printf("Digite a base menor:\n");
    scanf("%f", &a);

    printf("Digite a base maior:\n");
    scanf("%f", &b);

    printf("Digite a altura:\n");
    scanf("%f", &h);

    float area = (a + b) * h / 2.0;

    printf("Area: %f\n", area);
}

