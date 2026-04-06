#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%i", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if (a > b) {
        printf("O primeiro numero é maior");
    } else if (b > a) {
        printf("O segundo numero é maior");
    } else {
        printf("Os numeros sao iguais");
    }
}