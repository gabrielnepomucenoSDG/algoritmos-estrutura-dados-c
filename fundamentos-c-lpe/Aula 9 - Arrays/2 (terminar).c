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


//Acrescentar um printf antes dos scans

int main(){
	float medias[60];
	float soma = 0;
	int i;
	
	
	for (i = 0; i<6; i++){
		//printf("Digite o primeiro: \n")
		scanf("%f",&medias[i]);
		soma = soma + medias[i];
		
	}
	
	printf("Média da turma: %f",soma/6);
	
	return 0;
}
