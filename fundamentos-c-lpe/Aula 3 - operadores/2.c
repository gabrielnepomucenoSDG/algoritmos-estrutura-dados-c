#include <stdio.h>

/* 2) Faça um programa que leia a idade de uma pessoa expressa em anos e
 escreva a respectiva idade em dias. Considere que o ano é de 365 dias.*/


int main(){
    int i;
    printf("Qual é a sua idade?\n");
    scanf("%d",&i);
    printf("Você já viveu %d dias.\n",i*365);

    return 0;    
}