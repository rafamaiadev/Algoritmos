#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int i;
	float A[10], B[10];
	
	for(i=0; i<10; i++) {
		printf("Digite um número: ");
		scanf("%f", &A[i]);
	}
	printf("O primeiro conjunto é: \n\n");
	for(i=0; i<10; i++) {
		printf("%.0f\n", A[i]);
	}
	printf("Seus quadrados são: \n\n");
	for(i=0; i<10; i++) {
		B[i] = A[i]*A[i];
		printf("%.f\n", B[i]);
	}
	
	return 0;
}
