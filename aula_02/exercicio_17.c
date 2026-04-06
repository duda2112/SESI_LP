#include <stdio.h>

int main() {
    float temperatura;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperatura);

    if (temperatura < 15)
        printf("Frio");
    else if (temperatura <= 25)
        printf("Agradavel");
    else
        printf("Quente");

;
}