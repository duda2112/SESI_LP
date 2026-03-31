#include <stdio.h>

int main() {
    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero > 0) {
        printf(" Numero Positivo\n");
    } else if (numero < 0) {
        printf(" Numero Negativo\n");
    } else {
        printf("Zero\n");
    }

}