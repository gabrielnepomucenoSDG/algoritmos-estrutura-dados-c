#include <stdio.h>

//Reajuste do salario informado dependendo da faixa do valor


int main(){
/*	ARMAZENANDO RESULTADO DO OP. TERNARIO PARA IMPRIMIR DEPOIS
	float s1,s2;
	
	
	printf("Digite o salario a ser reajustado\n");
	scanf("%f",&s1);
	
	s2 = s1>1000 ? s1*1.05 : s1*1.07;
	printf("O salario reajustado sera R$ %f",s2);
*/	

/*	PRINTF DIRETO NO OPERADOR TERNARIO
	float s;
	
	
	printf("Digite o salario a ser reajustado\n");
	scanf("%f",&s);
	
	s>1000 ? printf("%f",s*1.05) : printf("%f",s*1.07);
*/

/*  OPERADOR TERNARIO DIRETO DENTRO DO PRINT
	float s;
	
	
	printf("Digite o valor do salario a ser reajustado: R$ ");
	scanf("%f",&s);
	
	printf("%f", s>1000 ? s*1.05 : s*1.07);
*/	

/* USANDO OPERADOR TERNARIO COM EXPRESSOES MULTIPLAS
	float s1,s2;
	
	
	printf("Digite o salario a ser reajustado\n");
	scanf("%f",&s1);
	
	s1>1000 ? (s2 = s1*1.05,printf("%f",s2)) : (s2 = s1*1.07,printf("%f",s2));

*/

	return 0;
}
