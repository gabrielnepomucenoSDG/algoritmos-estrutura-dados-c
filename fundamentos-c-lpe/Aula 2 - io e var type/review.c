#include <stdio.h>



int main(){
int idade; 
char nome[80]; 
float altura;
char sexo;
printf("Digite seu nome, sua idade, sua altura, e seu sexo (M ou F)");
scanf("%s%d%f %c",&nome,&idade,&altura,&sexo);
printf("nome: %s\nidade: %d\naltura: %f\nsexo: %c\n",nome,idade,altura,sexo);



}
/*ERROS:

Esquecer de especificar as variáveis no PRINTF
Esquecer a % no SCANF
Esquecer do & no SCANF
Esquecer de colocar no " " (espaço) entre o %c e o resto dos % no SCANF
Esquecer que só dá pra DECLARAR variáveis da mesma linha quando são do mesmo tipo
*/