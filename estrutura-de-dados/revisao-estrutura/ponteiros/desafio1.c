#include <stdio.h>
#include <stdlib.h>

int dobrar(float);


int main(){
float x = 0;

printf("Digite o valor de x: ");
scanf("%f",&x);
dobrar(&x);
printf("Valor dobrado: %f",x);



}

void dobrar(float *x){
    *x = 2**x;
}




/*
Ponteiro para Inteiro

Descrição: Crie uma função que receba um ponteiro para um inteiro e altere seu valor para o dobro do valor original.
Entrada: Um inteiro.
Saída: O dobro do inteiro.
*/