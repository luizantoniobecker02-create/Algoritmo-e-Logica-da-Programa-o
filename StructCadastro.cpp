#include <stdio.h>
#include <string.h>

struct Produto{
	int codigo;
	char nome[40];
	float preco;
	int QuantidadeEstoque;
};

int main(){
	
	struct Produto estoque[3];
	
	estoque[0].codigo=101;
	strcpy(estoque[0].nome,"Teclado Mecanico");
	estoque[0].preco=250.00;
	estoque[0].QuantidadeEstoque=15;
	
	estoque[1].codigo=102;
	strcpy(estoque[1].nome,"Mouse Gamer");
	estoque[1].preco=120.50;
	estoque[1].QuantidadeEstoque=30;
	
	estoque[2].codigo=103;
	strcpy(estoque[2].nome,"Monitor 24 Pol");
	estoque[2].preco=899.99;
	estoque[2].QuantidadeEstoque=8;
	
	printf("===RELATORIO DE ESTOQUE===\n\n");
	
	for (int i=0;i<3;i++){
		printf("Codigo: %d\n", estoque[i].codigo);
		printf("Produto:%s\n", estoque[i].nome);
		printf("Preco: %.2f\n", estoque[i].preco);
		printf("Estoque: %d unidades\n", estoque[i].QuantidadeEstoque);
		printf("---------------------------\n");
	}
	return 0;
}

