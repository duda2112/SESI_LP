#include <stdio.h>


int main() {
    int idades[15];
    int i;
    int jovens = 0, adultos = 0, idosos = 0;

    // Entrada das idades
    for(i = 0; i < 15; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);

        // Classificação
        if(idades[i] <= 17) {
            jovens++;
        } else if(idades[i] <= 59) {
            adultos++;
        } else {
            idosos++;
        }
    }

    // Exibição das quantidades
    printf("\nQuantidade de jovens: %d\n", jovens);
    printf("Quantidade de adultos: %d\n", adultos);
    printf("Quantidade de idosos: %d\n", idosos);

    // Verificar qual grupo é maior
    if(jovens > adultos && jovens > idosos) {
        printf("O grupo com maior quantidade é: Jovens\n");
    } else if(adultos > jovens && adultos > idosos) {
        printf("O grupo com maior quantidade é: Adultos\n");
    } else if(idosos > jovens && idosos > adultos) {
        printf("O grupo com maior quantidade é: Idosos\n");
    } else {
        printf("Ha empate entre dois ou mais grupos.\n");
    }


}
