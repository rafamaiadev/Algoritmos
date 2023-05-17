# include <stdio.h>
# include <string.h>

struct Ingredientes {
	char nomeIng[60];
	int quant;
};

struct LivroReceita {
	char nome[25];
	struct Ingredientes ingredientes;
} receitas[2];



int main() {
	int i, saida;
	char receitaProc[25];
	
	for(i=0; i<2; i++) {
		printf("Digite o nome da receita %d: ", i+1);
		scanf(" %25[^\n]", receitas[i].nome);
		
		printf("Digite a quantidade de ingredientes da receita %d: ", i+1);
		scanf("%d", &receitas[i].ingredientes.quant);
		
		printf("Digite os ingredientes da receita %d: ", i+1);
		scanf(" %60[^\n]", receitas[i].ingredientes.nomeIng);
	}
	
	do {
		printf("Digite o nome da receita procurada: ");
		scanf(" %25[^\n]", receitaProc);
		
		for(i=0; i<2; i++) {
		if(strcmp(receitaProc, receitas[i].nome) == 0) {
			printf("-----Receita encontrada-----\n");
			printf("Ingredientes usados: %s\n", receitas[i].ingredientes.nomeIng);
			break;
		}	
	}
	
	if(i == 2) {
		printf("A receita nao foi encontrada.\n");	
	}
	
	printf("Deseja procurar outra receita? Se sim(tecle 0), se nao(Tecle -1): ");
	scanf("%d", &saida);
	
}	while(saida != -1);
	
	return 0;	
}
