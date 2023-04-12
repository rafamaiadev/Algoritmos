#include <stdio.h>

int main() {
	int valor[5], i, menorV, maiorV, posicao1 = 0, posicao2 = 0;
	
	printf("Digite 5 valores:\n");
	for(i=0; i<5; i++) {
		scanf("%d", &valor[i]);
	}
	
	menorV = valor[0];
	maiorV = valor[0];
	
	for(i=0; i<5; i++) {
		if(valor[i] > maiorV) {
			maiorV = valor[i];
			posicao1 = i;
		}
		if(valor[i] < menorV) {
			menorV = valor[i];
			posicao2 = i;
		}
	}
	
	printf("O maior valor esta na posicao %d\n", posicao1);
	printf("O menor valor esta na posicao %d", posicao2);
		
	return 0;
}	
	
