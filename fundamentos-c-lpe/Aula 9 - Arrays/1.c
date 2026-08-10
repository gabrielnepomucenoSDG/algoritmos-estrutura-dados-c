#include <stdio.h>
/*
Para as situações, abaixo, implemente a solução utilizando vetor.
1) Escreva um programa que cria um vetor de inteiros com duas posições
e, depois, troque o conteúdo entre essas posições.
2) Faça um programa para calcular a média final de uma turma
composta por 60 alunos. A média de cada aluno deve ser informada
pelo usuário.
3) Faça um programa para ler 40 números inteiros, calcular a média dos
mesmos e exibir todos os números que estiverem acima da média.
*/

int main (){
	int inteiros[2] = {1, 3};
	int n = inteiros[0];
	int i;
	
	printf("Valores do array antes da troca:\n");
	for (i = 0; i<2; i++){
		printf("%d\n",inteiros[i]);
		
	}
	
	inteiros[0] = inteiros[1];
	inteiros[1] = n;
	
	printf("Valores do array depois da troca:\n");
	for (i = 0; i<2; i++){
		printf("%d\n",inteiros[i]);
	}
	
	
	return 0;
}
