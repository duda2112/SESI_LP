#include<stdio.h>

float main() {
	float nota;

	printf("digite a nota (0 a 10):");
	scanf("%f", &nota);
	if (nota >= 7) {
		printf("aluno aprovado");
	} else if(nota >= 5 && nota <= 6.9) {
		printf("aluno em recuperaçao");
	} else if(nota <= 5) {
		printf("aluno reprovado");
	}
}