#include <stdio.h>
#include "function_calcularpotencia.c"
int main() {
    int b, e;

    printf("--- Programa Potencia ---\n");
    printf("Digite a base e o expoente (ex: 2 3): ");
    
    if (scanf("%d %d", &b, &e) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (e < 0) {
        printf("Este programa suporta apenas expoentes inteiros positivos.\n");
    } else {
        long long res = calcularPotencia(b, e);
        printf("Resultado: %lld\n", res);
    }

    return 0;
}