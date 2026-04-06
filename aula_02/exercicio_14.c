#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota (0 a 10): ");
    scanf("%f", &nota);

    if (nota >= 9)
        printf("A\n");
    else if (nota >= 7)
        printf("B\n");
    else if (nota >= 5)
        printf("C\n");
    else
        printf("D\n");

    return 0;
}