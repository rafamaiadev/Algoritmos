# include <stdio.h>
# include <string.h>

#define MAX_AGENDA 50

struct Contato {
	char nome[50];
	int DDD;
	char telefone[15];
	char tipoTel[10];
};

void cadastroContato(struct Contato agenda[], int *numContatos);

void buscarContato(struct Contato agenda[], int numContatos);

int main() {
	struct Contato agenda[MAX_AGENDA];
	int numContatos = 0;
	
	cadastroContato(agenda, &numContatos);
	
	buscarContato(agenda, numContatos);
	
	return 0;
}

void cadastroContato(struct Contato agenda[], int *numContatos) {
	int i;
	if(*numContatos == MAX_AGENDA) {
		printf("Agenda cheia. Impossivel cadastrar mais contatos.\n");
		return;
	}
	for(i = *numContatos; i<MAX_AGENDA; i++) {
		printf("Digite um nome para cadastro ou 'fim' para finalizar: ");
		scanf(" %50[^\n]", agenda[i].nome);
		if((strcmp(agenda[i].nome, "fim") == 0)) break;
		
		printf("Digite um DDD para cadastro: ");
		scanf("%d", &agenda[i].DDD);
		
		printf("Digite um telefone para cadastro: ");
		scanf(" %15[^\n]", agenda[i].telefone);
		
		printf("Digite o tipo de telefone para cadastro(Fixo ou Movel): ");
		scanf(" %10[^\n]", agenda[i].tipoTel);
		printf("\n");
		
		(*numContatos)++;	
	}	
	
	system("cls");
}	

void buscarContato(struct Contato agenda[], int numContatos) {
	char contato[50];
	int i, encontrado = 0;
	
	do{
		printf("Digite o nome do contato procurado ou 'fim' para finalizar: ");
		scanf(" %50[^\n]", contato);
		
		for(i=0; i<numContatos; i++) {
			
			if(strcmp(contato, agenda[i].nome) == 0) {
				printf("Usuario encontrado:\n");
				printf("Telefone: (%d)%s\n", agenda[i].DDD, agenda[i].telefone);
				printf("\n");
				encontrado = 1;
				break;
			}
		}
		if(encontrado == 0) {
			printf("O usuario nao foi encontrado.\n");	
		}
	} while(strcmp(contato, "fim") != 0);
}
	
