#include<stdio.h>//biblioteca

int main(){//declara uma variavel 

	int numeros[5]={1,2,3,4,5};	
	char vogais[5]={'A','E','I','O','U'};///declara valores do tipo char
	printf("A letra do indice 2 e: %c \n\n", vogais[2]);//mostra as letras
	
	vogais[2]='X';//mudando o indice 2, para o valor X
	printf("Nova letra do indice 2 apos a alteracao: %c \n\n", vogais[2]);//apresenta uma mensagem 
	
	printf("Lista completa dos elementos do vetor:\n");//apresenta uma lista de vogais
	for (int i=0; i<5; i++){//para i ira receber 0 ate chegar no numero 5
		printf("Indice %d -> Letra: %c \n",i,vogais[i]);//apresenta vogais na tela 
	}
	
	return 0;//fim do programa 	
}
