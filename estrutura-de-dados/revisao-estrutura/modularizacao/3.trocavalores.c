#include <stdio.h>
#include <stdlib.h>


void ordenar(float *a, float *b){
    float temp = 0;

    if(*a > *b){
        temp = *b;
        *b = *a;
        *a = temp;
    }

}



int main(){
    float a = 0;
    float b = 0;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Valor de a antes da ordenação: %f\n Valor de b antes da ordenação: %f\n", a, b);
    ordenar(&a,&b);
    printf("Valor de a depois da ordenação: %f\n Valor de b depois da ordenação: %f\n", a, b);
    

}







/*
 3. Escreva uma função que recebe dois parâmetros a e b e troca o valor de a com o valor de b se
 o valor de a for maior do que o de b; o objetivo é ter, ao final, o menor dos dois valores em a e
 o maior em b. Por exemplo, se a = 5eb = 3,entãoosvaloresdasduasvariáveis devem ser
 trocados, mas se a = 2 e b = 7, então a ordem já está correta e não é necessário trocar os
 valores. Utilize passagem de parâmetros por referência para poder afetar o valor das variáveis.
 Escreva um programa para testar a função.
*/