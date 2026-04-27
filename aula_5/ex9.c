#include <stdio.h>

int main() {
    int i;
    float numeros[10];


    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    for(i = 0; i < 10; i++) {
        if(numeros[i] < 0) {
            numeros[i] = 0;
        }
    }

    printf("\nValores apos substituicao:\n");
    for(i = 0; i < 10; i++) {
        printf("%.2f\n", numeros[i]);
    }


}