#include <stdio.h>

int main() {
	int i = 1, num;
	
	printf("Digite um numero inteiro e positivo:\n");
	scanf("%d", &num);
	
	while(i <= num) {
		printf("%d ", i);
		i++;
	}
	
	printf("Acabou!");
	
	return 0;
}
