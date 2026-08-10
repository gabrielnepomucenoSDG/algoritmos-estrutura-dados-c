#include <stdio.h>

/*
slide LPE06
2) Um programa deve gerar todos os múltiplos de um número qualquer
inteiro positivo informado pelo usuário. O intervalo de múltiplos a serem
gerados é até 20. Validade a entrada.
*/

int main (){
	
	int n, i, m;
	float f;
	
	printf("Digite um numero inteiro positivo para que eu te informe os 20 primeiros multiplos dele.\n");
	scanf("%f",&f);
	n = f;
	
	if ((f-n)!=0 && n>0)
		printf("Eu so entendo valores inteiros, por isso tente me dizer apenas valores inteiros da próxima vez. Vou fazer o calculo dos multiplos considerando apenas a parte inteira desse numero que voce informou.");
	
	while(n<0) {
		printf("\nValor negativo digitado. Digite um numero inteiro positivo para que eu te informe os 20 primeiros multiplos dele.\n");
		scanf("%f",&f);
		n = f;

		if ((f-n)!=0 && n>0)
			printf("Eu so entendo valores inteiros, por isso procure me dizer apenas valores inteiros da próxima vez. Vou fazer o calculo dos multiplos considerando apenas a parte inteira desse numero que voce informou.");
		
		
	}
	i = 1;
	m = 0;
	
	printf("\n\nM(%d) = {",n);
	while (i<=20){
		m = m + n;
		printf("%d",m);
		i++;
		if(i<=20)
			printf(", ");
		
	}
	printf("}");
	
	
	
	
	
	return 0;
}
