#include <stdio.h>
#include <ctype.h>

struct Usuario {
	char nome[50];
	char endereco[50];
	char nascimento[20];
	char cidade[50];
	char cep[12];
	char email[50];	
}usuario;

int main() {
	int i, temArroba = 0;
	printf("Digite o nome do usuario: ");
	scanf(" %50[^\n]", usuario.nome);
	
	printf("Digite o endereco do usuario: ");
	scanf(" %50[^\n]", usuario.endereco);
	
	printf("Digite a data de nascimento do usuario dd/mm/aaaa(Apenas digitos): ");
	scanf(" %9[^\n]", usuario.nascimento);
	for(i=0; usuario.nascimento[i] != '\0'; i++) {
		if(!isdigit(usuario.nascimento[i])) {
			printf("Data de nascimento invalida");
			return 1;
		}
	}
	if(i != 8) {
		printf("Data de nascimento invalida");
		return 1;	
	}
	printf("Digite a cidade do usuario: ");
	scanf(" %50[^\n]", usuario.cidade);
	
	printf("Digite CEP do usuario(Apenas digitos): ");
	scanf(" %9[^\n]", usuario.cep);
	for(i=0; usuario.cep[i] != '\0'; i++) {
		if(!isdigit(usuario.cep[i])) {
			printf("CEP invalido");
			return 1;
		}
	}
	if(i != 8) {
		printf("CEP invalido");
		return 1;	
	}	
	printf("Digite o email do usuario: ");
	scanf(" %50[^\n]", usuario.email);
	for(i=0; usuario.email[i] != '\0'; i++) {
		if(usuario.email[i] == '@') {
			temArroba = 1;
			break;
		}
	}
	if(temArroba == 0) {
		printf("Insira um email valido.");
	}
	
	system("cls");
	
	printf("Nome: %s\n", usuario.nome);
	printf("Endereco: %s\n", usuario.endereco);
	printf("Nascimento: %s\n", usuario.nascimento);
	printf("Cidade: %s\n", usuario.cidade);
	printf("CEP: %s\n", usuario.cep);
	printf("Email: %s", usuario.email);
	
	return 0;
}
	
	
	
