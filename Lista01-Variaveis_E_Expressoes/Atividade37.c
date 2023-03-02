#include <stdio.h>

int main() {
	float valorOriginal, promocao;
	
	printf("Digite um valor desejado: \n");
	scanf("%f", &valorOriginal);
	
	promocao = valorOriginal*0.88;
	
	printf("O valor com desconto e: %.2f", promocao);
	
	return 0;
}
