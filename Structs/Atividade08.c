#include <stdio.h>

struct DadosFuncionario {
	char nome[50];
	int idade;
	char sexo;
	char cpf[12];
	int nascimento;
	int codSetor;
	char cargo[30];
	int salario;	
}dados;

int main() {
	printf("Digite o nome do funcionario: ");
	scanf(" %50[^\n]", dados.nome);
	
	printf("Digite a idade do funcionario: ");
	scanf("%d", &dados.idade);
	
	printf("Digite o sexo do funcionario (M/F): ");
	scanf(" %c", &dados.sexo);
	
	printf("Digite o cpf do funcionario (apenas numeros): ");
	scanf(" %11[^\n]", dados.cpf);
	
	printf("Digite o nascimento do funcionario (apenas numeros): ");
	scanf("%d", &dados.nascimento);
	
	printf("Digite o Codgio do setor do funcionario: ");
	scanf("%d", &dados.codSetor);
	
	printf("Digite o cargo do funcionario: ");
	scanf(" %30[^\n]", dados.cargo);
	
	printf("Digite o salario do funcionario: ");
	scanf("%d", &dados.salario);
	
	system("cls");
	
	printf("Nome: %s\n", dados.nome);
	printf("Idade: %d\n", dados.idade);
	printf("Sexo: %c\n", dados.sexo);
	printf("CPF: %s\n", dados.cpf);
	printf("Nascimento: %d", dados.nascimento);
	printf("Codigo do Setor: %d\n", dados.codSetor);
	printf("Cargo: %s\n", dados.cargo);
	printf("Salario: %d", dados.salario);
	
	return 0;
}
