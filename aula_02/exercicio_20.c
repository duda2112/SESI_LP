#include <stdio.h>

int main() {
    int velocidade;

    printf("Digite a velocidade do carro (km/h): ");
    scanf("%d", &velocidade);

    if (velocidade <= 60) {
        printf("Sem multa\n");
    } else if (velocidade <= 80) {
        printf("Multa leve");
    } else if (velocidade <= 100) {
        printf("Multa grave");
    } else {
        printf("Multa gravissima");
    }


}