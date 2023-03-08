#include <stdio.h>

int main() {
	int nInicial, nFinal, incremento;
	
	printf("Digite o valor inicial:\n");
	scanf("%d", &nInicial);
	
	int i = nInicial;
	
	printf("Digite o valor final:\n");
	scanf("%d", &nFinal);
	
	printf("Digite o valor do incremento:\n");
	scanf("%d", &incremento);
	
	printf("Contagem:");
	
	while(i >= nInicial && i <= nFinal) {
		printf("%d ", i);
		i += incremento;
	}
	
	printf("Acabou!");
	
	return 0;
}
