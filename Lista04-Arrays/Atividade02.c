#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int i, A[6];
	
	for(i=0; i<6; i++) {
		printf("Digite um número: ");
		scanf("%d", &A[i]);
	}
	
	printf("Os números digitados são: \n");
	for(i=0; i<6; i++) {
		printf("%d\n", A[i]);
	}
	
	return 0;
}
