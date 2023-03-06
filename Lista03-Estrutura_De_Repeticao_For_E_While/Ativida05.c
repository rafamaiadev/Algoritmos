#include <stdio.h>

int main() {
	char sexo;
	int i, peso, mulheres = 0, homensMaiorQue100 = 0, maiorPesoHomem = 0;
	float somaPesoMulheres = 0;
	 
	
	for(i = 1; i<=8; i++) {
		printf("Digite o sexo do usuario %d (F/M) \n", i);
		scanf(" %c", &sexo);
		
		printf("Digite o peso do usuario %d \n", i);
		scanf("%d", &peso);
		
		if(sexo == 'F') {
			
			mulheres++;
			
			somaPesoMulheres += peso;
			
		} else if(sexo == 'M' && peso > 100) {
			
			homensMaiorQue100++;
		}
		
		if(sexo == 'M' && peso > maiorPesoHomem) {
			
			maiorPesoHomem = peso;
		}
	}   
	    if(mulheres == 0) {
	    	
	    	printf("Nenhuma mulher foi cadastrada \n");
			
		} else {
			
			printf("O numero de mulheres cadastradas e: %d \n", mulheres);
		}
		
		
		if(homensMaiorQue100 > 0) {
			
			printf("O numero de homens com mais de 100kg e: %d \n", homensMaiorQue100);
			
		} else {
			
			printf("Nenhum homem com mais de 100kg foi cadastrado \n");
		}
		
		if (mulheres == 0) {
			
			printf("A media de peso das mulheres e 0 \n");
			
		} else {
			
			printf("A media de peso das mulheres e: %.2f \n", somaPesoMulheres/mulheres);
		}
		
		printf("O maior peso entre os homens e: %d", maiorPesoHomem);
		
		return 0;
}
