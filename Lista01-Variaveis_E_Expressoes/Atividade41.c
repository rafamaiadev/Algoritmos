#include <stdio.h>

int main() {
	float horasTrabalhadas, valorHora, salario;
	
	printf("Digite um valor para 1 hora de trabalho: \n");
	scanf("%f", &valorHora);
	
	printf("Digite um valor para horas trabalhadas no mes: \n");
	scanf("%f", &horasTrabalhadas);
	
	salario = valorHora*horasTrabalhadas*1.1;
	
	printf("O valor a ser pago com acrescimo de 10%% e: %.2f", salario);
	
	return 0;
}
