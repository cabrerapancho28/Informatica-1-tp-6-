#include <stdio.h>
#include <math.h>

void calcularRaices(float A, float B, float C, float *raiz1, float *raiz2) {
    float discriminante;

    discriminante = B * B - 4 * A * C;

    if (discriminante > 0) {
        *raiz1 = (-B + sqrt(discriminante)) / (2 * A);
        *raiz2 = (-B - sqrt(discriminante)) / (2 * A);
    }
}

int main() {
    float A, B, C, raiz1, raiz2;

    printf("Ingrese los coeficientes de la ecuación cuadrática:\n");
    printf("A: ");
    scanf("%f", &A);
    printf("B: ");
    scanf("%f", &B);
    printf("C: ");
    scanf("%f", &C);

    calcularRaices(A, B, C, &raiz1, &raiz2);

    printf("Las raices de la ecuación cuadrática son: %.2f y %.2f\n", raiz1, raiz2);

    return 0;
}
