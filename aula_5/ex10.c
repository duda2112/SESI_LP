#include <stdio.h>

int main() {
    int v[10];
    int i, n, temp;


    for(i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &v[i]);
    }


    for(i = 0; i < 9; i++) {
        for(n = 0; n < 9 - i; n++) {
            if(v[n] > v[n + 1]) {
                temp = v[n];
                v[n] = v[n + 1];
                v[n + 1] = temp;
            }
        }
    }


    printf("\nNumeros em ordem crescente:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }


}