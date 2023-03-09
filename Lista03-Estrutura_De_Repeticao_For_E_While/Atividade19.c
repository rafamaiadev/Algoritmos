#include <stdio.h>

int main() {
	int i = 0, num, impar = 0, par = 0;
	
	while(i >= 0 && i <= 5) {
		printf("Insira um numero inteiro:\n");
		scanf("%d", &num);
		
		if(num % 2 == 0) {
			impar++;
		} else {
			par++;
		}
		i++;
    }	
		printf("%d sao pares e %d sao impares.", par, impar);
		
		return 0;
}

