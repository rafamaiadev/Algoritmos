#include <stdio.h>

int main() {
	
	int num, i;
		
	printf("Digite um numero qualquer:\n");
	scanf("%d", &num);
	
	for(i = 0; i <= num; i++) {
		printf("%d, ", i);
	}
	
	printf("FIM!");
	
	return 0;
}
