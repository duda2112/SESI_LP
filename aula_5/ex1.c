#include <stdio.h>
int main() {
    int numeros[5];
    int i;

   
    for(i = 0; i < 5; i++) {
        printf("\nDigite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    
    printf("Valores digitados:");
    for(i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");


}