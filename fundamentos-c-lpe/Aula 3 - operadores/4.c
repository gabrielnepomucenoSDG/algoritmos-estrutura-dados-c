#include <stdio.h>

/* 4) Faça um programa para calcular o diâmetro e a área de uma circunferência
 combase noraio fornecido pelo usuário. Exiba o diâmetro, o raio e a área.*/

int main () {
float r;

scanf("%f",&r);

printf("%f\n%f\n%f\n",2*r,r,r*r*3.14159265);


    return 0;
}