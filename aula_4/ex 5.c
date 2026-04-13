#include <stdio.h>

int main() {
    float temp[7];
    float soma = 0, media;
    int i;

    int diaMaisQuente = 0, diaMaisFrio = 0;
    int acimaMedia = 0;

    // Leitura das temperaturas
    for(i = 0; i < 7; i++) {
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &temp[i]);
        soma += temp[i];
    }

    // Inicializa maior e menor
    float maior = temp[0];
    float menor = temp[0];

    // Verifica maior e menor temperatura
    for(i = 1; i < 7; i++) {
        if(temp[i] > maior) {
            maior = temp[i];
            diaMaisQuente = i;
        }
        if(temp[i] < menor) {
            menor = temp[i];
            diaMaisFrio = i;
        }
    }

    // Calcula média
    media = soma / 7;

    // Conta dias acima da média
    for(i = 0; i < 7; i++) {
        if(temp[i] > media) {
            acimaMedia++;
        }
    }

    // Resultados
    printf("Media: %.2f\n", media);
    printf("Dia mais quente: %d (%.2f graus)\n", diaMaisQuente + 1, maior);
    printf("Dia mais frio: %d (%.2f graus)\n", diaMaisFrio + 1, menor);
    printf("Dias acima da media: %d\n", acimaMedia);


}

