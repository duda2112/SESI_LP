#include <stdio.h>

int main() {
    int valores[12];
    int i;
    int crescente = 1, decrescente = 1;

    // Leitura dos 12 valores
    for(i = 0; i < 12; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    // Verificação
    for(i = 0; i < 11; i++) {
        if(valores[i] > valores[i + 1]) {
            crescente = 0;
        }
        if(valores[i] < valores[i + 1]) {
            decrescente = 0;
        }
    }

    // Resultado
    if(crescente) {
        printf("Ordem crescente\n");
    } else if(decrescente) {
        printf("Ordem decrescente\n");
    } else {
        printf("Desordenada\n");
    }


}