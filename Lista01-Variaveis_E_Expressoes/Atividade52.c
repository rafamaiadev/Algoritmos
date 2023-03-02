#include <stdio.h>

int main() {
	int valorTotal, apostador1, apostador2, apostador3, constante;
	int premio1, premio2, premio3;
	
	printf("Digite o valor total do premio: \n");
	scanf("%d", &valorTotal);
	
	printf("Digite o valor do apostador 1: \n");
	scanf("%d", &apostador1);
	
	printf("Digite o valor do apostador 2: \n");
	scanf("%d", &apostador2);
	
	printf("Digite o valor do apostador 3: \n");
	scanf("%d", &apostador3);
	
	constante = (valorTotal)/(apostador1+apostador2+apostador3);
	
	premio1 = apostador1*constante;
	premio2 = apostador2*constante;
	premio3 = apostador3*constante;
	
	printf("O valor para o apostador1 e: %d\n", premio1);
	printf("O valor para o apostador2 e: %d\n", premio2);
	printf("O valor para o apostador 3 e: %d\n", premio3);
	
	return 0;
}
