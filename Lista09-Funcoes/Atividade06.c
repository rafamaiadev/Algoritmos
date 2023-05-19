# include <stdio.h>

int somaAlgarismos(int);

int main() {
	
	int numDigitado;
	
	printf("Digite um numero inteiro e maior que 0: ");
	do {
		scanf("%d", &numDigitado);
		if(numDigitado <= 0) {
			printf("Numero invalido. Digite novamente.");
		}	
	} while(numDigitado <= 0);
	
	system("cls");
	
	somaAlgarismos(numDigitado);
	
	return 0;	
}

int somaAlgarismos(int num) {
	int soma = 0;
	
	while (num > 0) {
		soma += num % 10;
		num /= 10;
	}
	
	printf("A soma dos algarismos do numero e: %d", soma);	
}
