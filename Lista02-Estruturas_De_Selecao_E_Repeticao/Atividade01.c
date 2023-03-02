#include <stdio.h>

int main () {
	char operador;
	float num1;
	float num2;
	float soma;
	float subtracao;
	float divisao;
	float multiplicacao;
	
	printf("Digite o operador desejado(+,-,*,/): \n");
	scanf("%c", &operador);
	
	printf("Digite o primeiro numero: \n");
	scanf("%f", &num1);
	
	printf("Digite o segundo numero: \n");
	scanf("%f", &num2);
	
	if(operador == '+') {
		soma = num1+num2;
		printf("O valor da soma e: %.2f", soma);
	} else if(operador == '-') {
		subtracao = num1-num2;
		printf("O valor da subtracao e: %.2f", subtracao);
	} else if(operador == '/') {
		divisao = num1/num2;
		printf("O valor da divisao e: %.2f", divisao);
	} else if(operador == '*') {
		multiplicacao = num1*num2;
		printf("O valor da multiplicacao e: %.2f", multiplicacao);
	}
	
	return 0;
}
