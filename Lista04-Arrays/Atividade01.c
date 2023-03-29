#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	int A[6] = {1, 0, 5, -2, -5, 7};
	int soma = 0, i;
	
	soma = A[0] + A[1] + A[5];
	
	printf("A soma é: %d\n", soma);
	
	A[4] = 100;
	
	for(i = 0; i < 6; i++) {
		printf("%d\n",A[i]);
	}
	
	return 0; 
}
