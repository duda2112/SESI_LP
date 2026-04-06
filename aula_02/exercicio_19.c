#include <stdio.h>

int main() {
    float peso;

    printf("Digite o peso da encomenda (kg): ");
    scanf("%f", &peso);

    if (peso <= 5) {
        printf("Frete: R$10");
    } else if (peso <= 20) {
        printf("Frete: R$20");
    } else {
        printf("Frete: R$50");
    }

}