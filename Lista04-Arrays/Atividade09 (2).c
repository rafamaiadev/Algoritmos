#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int i, A[6];
	
	printf("Digite 6 valores pares: \n");
	for(i=0; i<6; i++) {
		scanf("%d", &A[i]);
		
		if(A[i] % 2 != 0) {
			printf("O n�mero digitado n�o � par.\n");
			i--;
		}
	}
	
	printf("Os n�meros em ordem inversa s�o: \n");
	for(i=5; i>=0; i--) {
		printf("%d\n", A[i]);
	}
	
	return 0;
}
