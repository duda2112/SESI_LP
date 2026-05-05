#include <stdio.h>

int adicao(int a, int b) {
	return a + b;
}

int subtracao(int a, int b) {
	return a - b;
}

int multiplicacao(int a, int b) {
	return a * b;
}

int divisao(int a, int b) {
	if (b == 0) {
		printf("\nErro: divisao por zero!\n");
		return 0;
	}
	return a / b;
}

int main() {
	int n1, n2;
	int opcao = -1;

	while (opcao != 0) {

		printf("\n======MENU======");

		printf("\n1 - Soma");
		printf("\n2 - Divisao");
		printf("\n3 - Multiplicacao");
		printf("\n4 - Subtracao");
		printf("\n0 - Sair");
		printf("\nEscolha uma opcao: ");
		scanf("%d", &opcao);

		if (opcao == 0) {
			printf("\ntchau volte sempre!!!\n");
		} else {
			printf("\nDigite o primeiro numero: ");
			scanf("%d", &n1);

			printf("Digite o segundo numero: ");
			scanf("%d", &n2);

			if (opcao == 1) {
				printf("\nResultado: %d\n", adicao(n1, n2));
			}

			if (opcao == 2) {
				printf("\nResultado: %d\n", divisao(n1, n2));
			}

			if (opcao == 3) {
				printf("\nResultado: %d\n", multiplicacao(n1, n2));
			}

			if (opcao == 4) {
				printf("\nResultado: %d\n", subtracao(n1, n2));
			}


		}
	}

}