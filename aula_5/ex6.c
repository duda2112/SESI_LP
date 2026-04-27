#include <stdio.h>

int main() {
    int numeros[10];
    int i, positivos = 0;


    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for(i = 0; i < 10; i++) {
        if(numeros[i] > 0) {
            positivos++;
        }
    }

    printf("\n %d numeros sao positivos", positivos);


}