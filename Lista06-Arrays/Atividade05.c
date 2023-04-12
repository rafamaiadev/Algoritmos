#include <stdio.h>

int main() {
	#include <stdio.h>

int main() {
	int i, v[5], k = 2, contRepetidos = 0, elemRepetidos = 0;
	printf("O numero da constante k e igual a 2:\n");
	printf("Digite 5 valores e verifique quantos se repetem k vezes: \n");
	for(i=0; i<5; i++) {
		scanf("%d", &v[i]);
	}
	
	for(i=0; i<5; i++) {
		contRepetidos = 0;
		
		if(i == 4) {
			break;
		}
		if(v[i] == v[i+1]) {
			contRepetidos = k;
		}
		if(contRepetidos == k) {
			elemRepetidos++;
		}
	}
	
	if(elemRepetidos > 0) {
		printf("Existem %d elementos que se repetem k vezes.", elemRepetidos);
	} else {
		printf("Nao existem elementos que se repetem k vezes.");
	}
	
	return 0;
}
}
