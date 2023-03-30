#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int i, A[6];
	
	printf("Digite 6 valores inteiros: \n");
	for(i=0; i<6; i++) {
		scanf("%d", &A[i]);
	}
	printf("Os valores em ordem inversa são: \n");
	for(i=5; i>=0; i--) {
		printf("%d\n", A[i]);
	}
	
	return 0;
}
