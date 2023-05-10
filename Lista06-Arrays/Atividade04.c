#include <stdio.h>

int main() {
	int i, j, v[5], k, contRepetidos = 0, elemRepetidos = 0;
	int repetidoAntes = 0;
	printf("Digite um numero para k de (2-5):\n");
	scanf("%d", &k);
	printf("Digite 5 valores e verifique quantos se repetem k vezes: \n");
	for(i=0; i<5; i++) {
		scanf("%d", &v[i]);
	}
	
	for(i=0; i<5; i++) {
		contRepetidos = 1;
		for(j=0; j<5; j++) {
			if(i != j && v[i] == v[j]) {
				contRepetidos++;
			}
		}
		if(contRepetidos == k) {
			for(j=0; j<i; j++) {
				if(v[i] == v[j]) {
					repetidoAntes = 1;
					break;
				}
			}
			if(!repetidoAntes) {
			elemRepetidos++;
		}
		
		}
	}
	
	if(elemRepetidos > 0) {
		printf("Existem %d elementos que se repetem k vezes.", elemRepetidos);
	} else {
		printf("Nao existem elementos que se repetem k vezes.");
	}
	
	return 0;
}
