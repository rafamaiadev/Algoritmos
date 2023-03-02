#include <stdio.h>

int main() {
	float salarioBase, salarioLiquido;
	
	printf("Digite o valor desejado para o salario: \n");
	scanf("%f", &salarioBase);
	
	salarioLiquido = (salarioBase*1.05) - (salarioBase*0.07);
	
	printf("O salario liquido sera de: %.2f", salarioLiquido);
	
	return 0;
}
