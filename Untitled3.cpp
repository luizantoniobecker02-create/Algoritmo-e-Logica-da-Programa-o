#include<stdio.h>//Biblioteca

int main(){//classe principal
	int dia_semana = 5;//declarando uma variavel
	switch (dia_semana){//selecao de uma semana
		
		case 1://caso um
			printf("Domingo. \n");
			break;//parar na condicao
			
		case 2://caso dois
	    	printf("segunda-feira. \n");
	        break;
		
		case 3://caso tres
	    	 printf("terca-feira. \n");
	       	 break;
		
		case 4://caso quatro
	    	printf("quarta-feira. \n");	
	    	break;
	    	
	    case 5://caso cinco
	    	printf("quinta-feira. \n");
	    	break;
	}
	
	return 0;
}
