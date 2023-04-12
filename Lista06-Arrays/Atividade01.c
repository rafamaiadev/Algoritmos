#include <stdio.h>

int main() {
	int vetor[5], i, somaVetor = 0, valorFixo;
	
	printf("Digite um valor fixo:\n");
	scanf("%d", &valorFixo);
	
	printf("Digite 5 valores para o vetor:\n");
	for(i=0; i<5; i++) {
		scanf("%d", &vetor[i]);
		somaVetor += vetor[i];
	}
	
	if(somaVetor == valorFixo) {
		printf("Os valores sao iguais!");
	} else {
		printf("Os valores sao diferentes!");
	}
	
	return 0;
	 
}
