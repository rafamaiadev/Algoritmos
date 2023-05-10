#include <stdio.h>

int main() {
	int i, v[5], contRepetidos = 0, elemRepetidos = 0;
	printf("Digite 5 valores e verifique \nquantos se repetem em sequencia: \n");
	for(i=0; i<5; i++) {
		scanf("%d", &v[i]);
	}
	
	for(i=0; i<5; i++) {
		contRepetidos = 0;
		
		if(i == 4) {
			break;
		}
		if(v[i] == v[i+1]) {
			contRepetidos = 2;
		}
		if(contRepetidos == 2) {
			elemRepetidos++;
		}
	}
	
	if(elemRepetidos > 0) {
		printf("Existem %d elementos que se repetem em sequencia.", elemRepetidos);
	} else {
		printf("Nao existem elementos que se repetem em sequencia.");
	}
	
	return 0;
}

