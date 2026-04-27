#include <stdio.h>
int main() {
    int numeros[10];
    int i;


    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

 
    printf("\nNumeros pares:\n");
    for(i = 0; i < 10; i++) {
        if(numeros[i] % 2 == 0) {
            printf("%d ", numeros[i]);
        }
    }

    printf("\n");

}