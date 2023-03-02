#include <stdio.h>

int main() {
	float valorInicial, valorComDesconto, valorParcelado, comissaoAvista, comissaoParcelado;
	
	printf("Informe o valor inicial desejado: \n");
	scanf("%f", &valorInicial);
	
	valorComDesconto = valorInicial*0.9;
	
	printf("O valor com desconto de 10%% e: %.2f \n", valorComDesconto);
	
	valorParcelado = valorInicial/3;
	
	printf("O valor de cada parcela e: %.2f \n", valorParcelado);
	
	comissaoAvista = valorComDesconto*0.05;
	
	printf("O valor da comissao a vista e: %.2f \n", comissaoAvista);
	
	comissaoParcelado = valorInicial*0.05;
	
	printf("O valor da comissao parcelado e: %.2f", comissaoParcelado);
	
	return 0;
}
