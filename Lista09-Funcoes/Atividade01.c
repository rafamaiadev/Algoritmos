# include <stdio.h>

int numInteiro (int num1) {
	return num1*2;
}

int main() {
	int numero = numInteiro(10);
	printf("O dobro do numero e: %d", numero);
}
