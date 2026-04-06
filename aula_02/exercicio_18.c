#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0) {
        printf("Ano de eleicao");
    } else {
        printf("Nao e ano de eleicao");
    }

}