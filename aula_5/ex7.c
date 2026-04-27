#include <stdio.h>

int main() {
    int i;
    float numero, soma = 0, media;

    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%f", &numero);
        soma += numero;
    }

    media = soma / 10;
    

    printf("A media dos valores e: %.2f\n", media);


}