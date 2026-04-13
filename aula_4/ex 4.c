#include <stdio.h>

int main() {
    int v[10];
    int i, j, cont;
    int dominante = 0;

    // Leitura dos valores
    for(i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    // Verificação do valor dominante
    for(i = 0; i < 10; i++) {
        cont = 0;

        for(j = 0; j < 10; j++) {
            if(v[i] == v[j]) {
                cont++;
            }
        }

        if(cont > 10 / 2) {
            dominante = v[i];
            break;
        }
    }

    // Resultado
    if(cont > 10 / 2) {
        printf("Valor dominante: %d\n", dominante);
    } else {
        printf("Nao existe valor dominante\n");
    }

}

