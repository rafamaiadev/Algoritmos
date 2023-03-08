#include <stdio.h>

int main() {
	int i = 6, soma = 0;
	
	while (i >= 6 && i <= 100) {
		soma += i;
		i += 2;
	}
	
	printf("A soma e igual a: %d", soma);
	
	return 0;
}
