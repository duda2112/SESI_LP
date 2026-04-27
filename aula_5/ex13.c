#include <stdio.h>

int main() {
    int numeros[10];
    int i, n;
    int cont, maiorCont = 0, maisRep;


    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }


    for(i = 0; i < 10; i++) {
        cont = 0;

        for(n = 0; n < 10; n++) {
            if(numeros[i] == numeros[n]) {
                cont++;
            }
        }

        if(cont > maiorCont) {
            maiorCont = cont;
            maisRep = numeros[i];
        }
    }

    printf("\nNumero que mais se repete: %d\n", maisRep);
    printf("Quantidade de repeticoes: %d\n", maiorCont);

    return 0;
}