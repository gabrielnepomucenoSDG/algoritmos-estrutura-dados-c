#include <stdio.h>
//COM SWITCH CASE (E DPS FAZ COM OPERADOR TERNÁRIO)
/*1) Construa um programa que leia um número de 1 a 7 e que informa o dia
da semana correspondente, sendo que o domingo será associado ao
número 1. Se o número não corresponder a um dia da semana, deve ser
exibida uma mensagem de erro ao usuário.
2) Construa um programa que leia um número de 1 a 12 e informa o trimestre
do ano correspondente. Se o número não corresponder a um mês do ano,
deve ser exibida uma mensagem de erro.
3) Construa um programa que leia dois números e exiba-os em ordem
crescente.
4) Escreva um programa que leia dois números e exiba o maior e o menor
deles. Caso os números sejam iguais deve ser exibida uma mensagem ao
usuário informando isto.*/


int main(){
	//1
	int d;
/*	int r;
	r = 1;
	while (r==1){*/
/*		printf("Digite um número para que eu verifique a qual dia da semana ele está associado :)\n");
		scanf("%d",&d);
		
		switch(d){
			case 1:
				printf("Domingo\n");
				break;
			case 2:
				printf("Segunda\n");
				break;
			case 3:
				printf("Terça\n");
				break;
			case 4:
				printf("Quarta\n");
				break;
			case 5:
				printf("Quinta\n");
				break;
			case 6:
				printf("Sexta\n");
				break;
			case 7:
				printf("Sabado\n");
				break;
			default:
				printf("Erro\n");
		}*/
		/*scanf("%d",&r);
	}*/
	
	int m;
	int r;
	
	printf("informe um numero para que eu verifique a que trimestre do ano ele esta associado :)\n");
	scanf("%d",&m);
	
	switch(m){
		
		case 1 ... 3:
			printf("Primeiro trimestre\n");
			break;
			
		case 4 ... 6:
			printf("Segundo trimestre\n");
			break;
		case 7 ... 9:
			printf("Terceiro trimestre\n");
			break;
		case 10 ... 12:
			printf("Quarto trimestre\n");
			break;
		default:
			printf("Erro");
		
	}
	
	
	
	
	
	
	
	return 0;
}
