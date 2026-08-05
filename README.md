#include <stdio.h>

int main(){//Declarando a variavel

float nota1, nota2, media;//declarando a variavel

printf("Digite a primeira nota:");//imprimir a mensagem
scanf("%f", &nota1);//Buscando a variavel (&nota1)

printf("Digite a segunda nota:");
scanf("%f", &nota2);//Buscando a variavel (&nota2)

media = (nota1 + nota2) / 2;//calculo é dividido

printf("A media final e %2f \n", media);//Mostra a mensagem (A media final é)


return 0;//Fim do programa 
}

