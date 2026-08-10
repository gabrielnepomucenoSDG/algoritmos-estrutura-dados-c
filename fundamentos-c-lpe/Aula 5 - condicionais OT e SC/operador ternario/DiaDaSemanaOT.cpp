#include <stdio.h>

/*Construa um programa que leia um número de 1 a 7 e que informa o dia da
semana correspondente, sendo que o domingo será associado ao número 1.
Se o número não corresponder a um dia da semana, deve ser exibida uma
mensagem de erro ao usuário.*/


int main(){
	int n;
	
	printf("Digite um numero de 1 a 7\n");
	scanf("%d",&n);
	
	printf(n==1 ? "domingouu" :
		n == 2 ? "segunda" :
			n == 3 ? "terça" :
				n == 4 ? "quarta" :
					n == 5 ? "quinta" :
						n == 6 ? "sextouu" :
							n == 7 ? "sabadouuu" : "erro"
	
	);
	return 0;
}
