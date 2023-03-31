#include <stdio.h>

int main() {
	int i, A[10];
	
	printf("Digite 10 numeros inteiros.\n");
	for(i=0; i<10; i++) {
		scanf("%d", &A[i]);
	}
	
	printf("Os numeros em ordem inversa sao: \n");
	for(i=9; i>=0; i--) {
		printf("%d\n", A[i]);
	}
	
	return 0;
}
