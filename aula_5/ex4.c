#include <stdio.h>


int main() {
    int numeros[6];
    int i,maior;


    for(i = 0; i < 6; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];

  
    for(i = 1; i < 6; i++) {
        if(numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    printf("\nO maior valor e: %d\n", maior);

}