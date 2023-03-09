#include <stdio.h>

int main() {
	int i = 500, soma = 0;
	
	while(i <= 500 && i>= 0) {
		soma += i;
		i -= 50;
	}
	
	printf("A soma e: %d", soma);
	
	return 0;
}
