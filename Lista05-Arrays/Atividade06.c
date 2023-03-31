#include <stdio.h>

int main() {
	int i, A[10], m, posicao = -1;
	
	printf("Digite 10 numeros para o vetor: \n");
	for(i=0; i<10; i++) {
		scanf("%d", &A[i]);
	}
	
	printf("Digite um valor para o elemento m: \n");
	scanf("%d", &m);
	
	for(i=0; i<10; i++) {
		if(m == A[i]) {
			posicao = i;
			break;
		} 
	}
	
	if(posicao != -1) {
		printf("O elemento m esta na posicao %d\n", posicao);
	} else {
		printf("O elemento m nao existe no vetor.");
	}
	
	return 0;
}
