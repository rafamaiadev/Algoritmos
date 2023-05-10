#include <stdio.h>

int main() {
	int i, v[6], nPares = 0, nImp = 0;
	int pares[6];
	int imp[6];
	
	printf("Digite 6 valores inteiros para o vetor:\n");
	for(i=0; i<6; i++) {
		scanf("%d", &v[i]);
	}
	
	for(i=0; i<6; i++) {
		if(v[i] % 2 == 0) {
			pares[nPares] = v[i];
			nPares++;
		}
	}
	for(i=0; i<6; i++) {
		if(v[i] % 2 != 0) {
			imp[nImp] = v[i];
			nImp++;
		}
	}
	
	for(i=0; i<nPares; i++) {
		v[i] = pares[i];
	}
	for(i=0; i<nImp; i++) {
		v[nPares+i] = imp[i];
	}
	
	printf("Os elementos inseridos em ordem de pares/impares sao:\n");
	for(i=0; i<6; i++) {
		printf("%d ", v[i]);
	}
		
	return 0;
}
