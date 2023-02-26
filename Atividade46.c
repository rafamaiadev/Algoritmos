#include <stdio.h>

int main() {
	int numeroLido, inverso = 0, resto;
	
	printf("Digite um numero: \n");
	scanf("%d", &numeroLido);
	
	while(numeroLido != 0) {
		resto = numeroLido % 10;
		inverso = inverso * 10 + resto;
		numeroLido = numeroLido /= 10;
	}
	
	printf("O numero inverso e: %d", inverso);
	
	return 0;
}
