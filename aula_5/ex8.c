#include <stdio.h>

int main() {
    int i;
    float numeros[10], soma = 0, media;


    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / 10;

    printf("\nMedia: %.2f\n", media);


    printf("Valores maiores que a media:\n");
    for(i = 0; i < 10; i++) {
        if(numeros[i] > media) {
            printf("%.2f\n", numeros[i]);
        }
    }


}