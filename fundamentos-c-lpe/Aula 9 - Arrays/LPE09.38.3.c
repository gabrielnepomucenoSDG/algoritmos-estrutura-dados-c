//LPE09.38.1

#include <stdio.h>
/*3. Escreva um programa que tenha uma matriz de 12 elementos quaisquer
informados pelo usuário e imprima quantos elementos são pares e
quantos são ímpares, bem como a soma total de cada um.*/

int main(){
	//matriz de dois inputs
	int matriz[4][3], somaimpar, somapar, n;
	int i,j,qimpar,qpar;
	somaimpar = somapar = qimpar = qpar = 0;
	
	for (i = 0; i < 4; i++){
		for (j = 0; j < 3; j++){
			printf("Insira o valor inteiro [%d][%d]: ", i ,j);
			scanf("%d",&matriz[i][j]);
			n = matriz[i][j];
			if (n % 2 == 0){
				qpar += 1;
				somapar += n;
				
			} else {
				qimpar += 1;
				somaimpar += n;
				
			}
			
		}
			
	}
	
	printf("Quantidade de pares: %d\n",qpar);
	printf("Soma dos pares: %d\n\n",somapar);
	printf("Quantidade de impares: %d\n",qimpar);
	printf("Soma dos impares: %d\n",somaimpar);
	
	//verificar se é par p/ contagem e soma
	//verificar se é ímpar p/ contagem e soma
	//imprimir quantidade e soma de pares e de ímpares
	
	
	
	
}
