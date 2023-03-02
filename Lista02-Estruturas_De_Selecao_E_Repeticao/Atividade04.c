#include <stdio.h>

int main() {
	int num, soma = 0, contagem = 0;
	float media;
	
	do {
        
		printf("Insira numeros pares ou tecle (0) para encerrar \n");
		
		scanf("%d", &num);
		
		if(num != 0 && num % 2 == 0) {
			
			soma += num;
			
			contagem++;
		}
		
	} while(num != 0);
	
	if (contagem>0) {
		
		media = (float) soma/contagem;
			
		printf("A media dos numeros e: %.2f", media);
		
	} else {
		
		printf("Nenhum numero par foi digitado");
	}
	
	return 0;								
}   
	
	
