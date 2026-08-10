#include <stdio.h>

/*
LPE06
3) Escreva um algoritmo que receba um n�mero diversas vezes e mostre o
seu inverso (1/n). O algoritmo encerra quando o valor digitado � zero,
exibindo uma mensagem de erro que diz que n�o se pode dividir por
zero.
*/

int main(){
	float n;
	printf("Digite um número: ");
	scanf("%f",&n);

	while(n!=0) {
		printf("%f\n",1/n);
		printf("Digite um número: ");
		scanf("%f",&n);
	}

	printf("Não se pode dividir 1 por zero!");
}
//erros: deixar o programa em loop infinito, desobedecendo as regras de variavel controladora no while