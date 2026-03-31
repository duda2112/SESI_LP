#include<stdio.h>

int main() {
    int idade;
    
    printf("digite a idade:");
    scanf("%i", &idade);
    
    if (idade >= 0 && idade <= 12) {
        printf("criança");
    }else if(idade >= 13 && idade <= 17) {
        printf("adolescente");
    }else if(idade >= 18 && idade <= 59) {
        printf("adulto");
    }else if(idade >= 60) {
        printf("idoso");
    }
}