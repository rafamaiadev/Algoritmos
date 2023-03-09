#include <stdio.h>

int main() {
	int salario, salarioHomens = 0, salarioMulheres = 0;
	char sexo, continuar = 'S';
	
	while(continuar == 'S') {
		printf("Digite o salario e o sexo com (F ou M):");
		scanf("%d %c", &salario, &sexo);
		
		if(continuar == 'S') {
			
			if(sexo == 'F') {
			salarioMulheres += salario;
		} else if(sexo == 'M') {
			salarioHomens += salario;
		}
	} 
		printf("Deseja continuar? Se sim(S), se nao(N)\n");
		scanf(" %c", &continuar);
	}
	
	printf("O salario pago aos homens e de: %d\n", salarioHomens);
	
	printf("O salario pago as mulheres e de: %d", salarioMulheres);
	
	return 0;
}
