#include <stdio.h>//Biblioteca
#include <stdbool.h> //boleano

int main (){
	int idade = 19;
	float altura = 1.79;//numero com virgula 
	char genero = 'M';//define a quant e numeros 
	
	bool ativo = true; 
	
	int pontos = 100;
	
	pontos = 150;
	
	printf("idade:%d anos \n", idade);//%d idade, ano e etc.
	printf("Altura: %.2f metros \n", altura);//#2f define quantas casas apos a virgula podem existir
	printf("Genero: %c \n", genero);//define texto, char
	printf("pontuacao atual: %d\n", pontos);//printa o valor definido como int em pontos, caso queira mudar o valor, chama o variavel = valor.
	
	return 0;
}
