#include <stdio.h>

/*
1. Um programa deve receber o preço e a quantidade de 20 diferentes produtos 
e mostrar o valor total da compra. Valide as entradas.
*/
int main () {
	int p, q, t;
	q = 1;
	while (q<=20) {
		printf("Digite o valor do produto %d \nR$ ", q);
		scanf("%d",&p);
		if(p<0)
			printf("Valor negativo digitado. Tente novamente. \n\n");
			
		while (p<0){
		printf("Digite o valor do produto %d\nR$ ", q);
		scanf("%d",&p);
		if(p<0)
			printf("Valor negativo digitado. Tente novamente. \n\n");
		}
		
		t = t + p;
		q++;
		printf("\n");
	}
	
	printf("O valor total dos produtos foi: R$%d",t);
	
	return 0;
}
