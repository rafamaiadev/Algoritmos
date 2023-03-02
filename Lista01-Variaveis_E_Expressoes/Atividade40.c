#include <stdio.h>

int main() {
	float diaria, diasTrabalhados, valorTotal;
	
	diaria = 30;
	
	printf("Digite o numero de dias requeridos: \n");
	scanf("%f", &diasTrabalhados);
	
	valorTotal = (diaria*diasTrabalhados)*0.92;
	
	printf("A quantia liquida recebida sera de: %.2f", valorTotal);
	
	return 0;
}
