#include <stdio.h>

int main() {
	float a, b;
	char op;
    
    printf("digite dois numeros");
	scanf("%f %c %f", &a, &op, &b);

	if (op == '+')
	    printf("%.2f\n", a + b);
	else if (op == '-') 
	    printf("%.2f\n", a - b);
	else if (op == '*') 
	    printf("%.2f\n", a * b);
	else if (op == '/' && b != 0) 
	    printf("%.2f\n", a / b);
	else 
	    printf("Erro\n");
}
