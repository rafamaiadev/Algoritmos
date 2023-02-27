#include <stdio.h>

int main() {
	int anoAtual = 2023, idadeAtual, anoNascimento;
	
	printf("Digite a idade atual: \n");
	scanf("%d", &idadeAtual);
	
	anoNascimento = anoAtual - idadeAtual;
	
	printf("O ano de nascimento e: %d", anoNascimento);
}
