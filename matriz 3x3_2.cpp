#include<stdio.h>
int main(){
	int linhas=2,colunas=3;
	int matriz[2][3];
	int soma=0;
	
	//lendo todos os valores digitados pelo usuario para preencher a matriz
	printf("Digite os valores para a matriz (2x3): \n");
	for (int i=0; i<linhas;i++){
		for (int j=0;j<colunas;j++){
			printf("Elemento [%d][%d]:",i,j);
			scanf("%d", &matriz [i][j]);
			soma += matriz[i][j];//acumula a soma dos valores informados
		}
	}
	
	//exibindo a matriz estruturada em formato de tabela
	printf("\nMatriz final:\n");
	for (int i=0; i<linhas; i++){
		for(int j=0; j<colunas; j++){
			printf("%d\t", matriz[i][j]);// "\t" adiciona uma tabulacao (espaco horizontal)
		}
		printf("\n");
	}
	printf("\nA soma de todos os elementos da matriz e:%d\n", soma);
	
	return 0;
}
