#include <stdio.h>

int main() {
	float salario, aumentoSalarial;
	
	printf("Digite um valor para o salario inicial: \n");
	scanf("%f", &salario);
	
	aumentoSalarial = salario*1.25;
	
	printf("O novo salario e: %.2f", aumentoSalarial);
	
	return 0;
}
