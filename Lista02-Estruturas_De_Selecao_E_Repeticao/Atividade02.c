#include <stdio.h>

int main() {
	int soma, num;
	
	printf("Digite numeros inteiros e positivos: \n");
	
	while (num != -1) {
		
		scanf("%d", &num);
		
		if(num != -1) {
			soma += num;
		}
	}
	
	printf("A soma dos numeros e: %d \n", soma);
	
	return 0;
}
