#include <stdio.h>

int main() {
    float saques[10];
    float total = 0;
    float maior;
    int i;
    int acima500 = 0;

    // Leitura dos saques
    for(i = 0; i < 10; i++) {
        printf("Digite o valor do saque %d: ", i + 1);
        scanf("%f", &saques[i]);
        total += saques[i];
    }

    // Inicializa o maior
    maior = saques[0];

    // Verifica maior saque e quantos acima de 500
    for(i = 0; i < 10; i++) {
        if(saques[i] > maior) {
            maior = saques[i];
        }
        if(saques[i] > 500) {
            acima500++;
        }
    }

    printf("*********************************************\n");
    printf("Total sacado: R$ %.2f\n", total);
    printf("Maior saque: R$ %.2f\n", maior);
    printf("Saques acima de R$ 500: %d\n", acima500);
    printf("*********************************************\n");

}