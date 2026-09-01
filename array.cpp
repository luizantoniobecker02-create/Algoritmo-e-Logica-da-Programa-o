#include<stdio.h>//biblioteca

int main(){//classe principal
	int numeros[5]={10,25,42,8,19};//declarando dentro do vetor 4 indices
	printf("O valor no indice 2 e:%d\n\n",numeros [2]);//mostra uma mensagem na tela 
	
	numeros[2]=99;//troca de valores
	printf("novo valor no indice2 apos a alteracao:%d\n\n",numeros[2]);//mostra uma mensagem na tela 

	printf("Lista completa dos elementos do vetor:\n");//mostra uma mensagem na tela
	for (int i=0; i<5;i++){//para i tem o valor inicial de 0 ate 5
		printf("INDICE %d -> Valor: %d\n",i,numeros[i]);//apresenta o indice na tela
	}	
	return 0;// fim do programa 
}
