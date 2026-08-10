#include <stdio.h>
/* 3) Faça um programa que leia dois números quaisquer e realize as quatro
 operações básicas da matemática entre eles.*/

int main () {
    float n, m;
    scanf("%f%f",&n,&m);
    printf("%f\n%f\n%f\n%f\n",n+m,n-m,n*m,n/m);

    return 0;
}