#include <stdio.h>

int main() {
	int i, contNeg = 0;
	float A[10], somaPosi = 0;
	
	for(i=0; i<10; i++) {
		scanf("%f", &A[i]);
	}
	for(i=0; i<10; i++) {
		if(A[i] > 0 ) {
			somaPosi += A[i];
		} else {
			contNeg++;
		} 
	}
	
	printf("A soma dos numeros positivos do vetor e: %.2f\n", somaPosi);
	printf("A quantidade de numeros negativos no vetor e: %d", contNeg);
}
