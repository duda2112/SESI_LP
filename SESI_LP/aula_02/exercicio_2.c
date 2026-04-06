 #include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%i", &num);

    if (num % 2 == 0) {
        printf("Par");
    } else {
        printf("Impar");
    }
}