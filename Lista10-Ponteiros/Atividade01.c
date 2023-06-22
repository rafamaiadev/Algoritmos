# include <stdio.h>
# include <string.h>

#define MAX_PROD 2

struct Produto {
	int codigo;
	char nome[50];
	float preco;
	int quantidade;
};

typedef struct Produto Produto;

void cadastrarProduto(Produto *produtoPtr) {
	printf("Digite o codigo do produto: ");
	scanf("%d", &produtoPtr->codigo);
		
	printf("Digite o nome do produto: ");
	scanf(" %50[^\n]", produtoPtr->nome);
		
	printf("Digite o preco do produto: ");
	scanf("%f", &produtoPtr->preco);
		
	printf("Digite a quantidade do produto: ");
	scanf("%d", &produtoPtr->quantidade);	
	
}


void consultarProduto (Produto *produtoPtr) {
	printf("Nome: %s\n", produtoPtr->nome);
	printf("Codigo: %d\n", produtoPtr->codigo);
	printf("Preco: %.2f\n", produtoPtr->preco);
	printf("Quantidade disponivel: %d\n", produtoPtr->quantidade);
}

void atualizarQuantidade (Produto *produtoPtr) {
	scanf("%d", &produtoPtr->quantidade);
}

void exibirTotalEstoque (Produto *produtoPtr){
	printf("Nome: %s\n", produtoPtr->nome);
	printf("Codigo: %d\n", produtoPtr->codigo);
	printf("Quantidade: %d\b", produtoPtr->quantidade);
	printf("\n\n");
} 
int main() {
	int i;
	Produto produto[MAX_PROD];
	
	for(i=0; i<MAX_PROD; i++) {
		printf("Cadastro do produto %d:\n", i + 1);
		cadastrarProduto(&produto[i]);
		printf("\n");
	}
	system("cls");
	
	printf("Informacoes dos produtos cadastrados\n");
	for(i=0; i<MAX_PROD; i++) {
		printf("Produto %d\n", i+1);
		consultarProduto(&produto[i]);
		printf("\n");
	}
	
	printf("Atualizacao da quantidade de produtos\n");
	for(i=0; i<MAX_PROD; i++) {
		printf("Quantidade d0 produto %d: ", i+1);
		atualizarQuantidade(&produto[i]);
		printf("\n");	
	}
	
	printf("Informacoes atualizadas de todos os produtos:\n");
    for (i = 0; i < MAX_PROD; i++) {
        printf("Produto %d:\n", i + 1);
        consultarProduto(&produto[i]);
        printf("\n");
    }
    
	printf("Informacao do estoque atualizado:\n");
	for(i=0; i<MAX_PROD; i++) {
		printf("Produto %d\n", i+1);
		exibirTotalEstoque(&produto[i]);	
	}
	
	return 0;
}




