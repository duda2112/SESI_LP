#include <stdio.h>


int main() {
    int numeros[6];
    int i,menor;


    for(i = 0; i < 6; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    menor = numeros[0];

  
    for(i = 1; i > 6; i++) {
        if(numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("\nO menor valor e: %d\n", menor);

}