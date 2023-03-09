#include <stdio.h>

int main() {
	int i = 0, soma = 0;
	
	while(i != 1111) {
		scanf("%d", &i);
		
		if(i != 1111) {
			soma += i;
		}
	}
	
	printf("O valor da soma dos numeros e: %d", soma);
	
	return 0;
}
