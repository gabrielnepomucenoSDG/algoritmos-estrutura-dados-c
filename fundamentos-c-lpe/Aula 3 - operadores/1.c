#include <stdio.h>
/* 1) Faça um programa que calcule a média de 5 números informados pelo
 usuário e imprima na tela o resultado.*/

int main () {
float media, n1, n2, n3, n4, n5;

scanf("%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5);
media = (n1+n2+n3+n4+n5)/5;
printf("Media é %.2f",media);


}