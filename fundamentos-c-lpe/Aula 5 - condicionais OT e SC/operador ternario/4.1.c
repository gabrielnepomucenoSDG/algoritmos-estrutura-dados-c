#include <stdio.h>
/* 1) Construa um programa que leia um número de 1 a 7 e que informa o dia da
 semana correspondente, sendo que o domingo será associado ao número 1.
 Se o número não corresponder a um dia da semana, deve ser exibida uma
 mensagemdeerro aousuário.*/
int main() {
    int d;
    printf("Escolha o número de um dia da semana\n");
    scanf("%d",&d);
    d > 7 || d < 1 ? printf("Dia inválido\n"): 0;
    //d < 1 ? printf("Dia inválido\n"): 0;
    d == 1 ? printf("Domingo!"):
        d == 2 ? printf("Segunda!"):
            d == 3 ? printf("Terça!"):
                d == 4 ? printf("Quarta!"):
                    d == 5 ? printf("Quinta!"):
                        d == 6 ? printf("Sexta!"):
                            d == 7 ? printf("Sábado!"): 0;
    d > 1 && d < 7 ? printf("\nDia de semana...") : 
        d == 1 || d == 7 ? printf("\nFim de semana.") : 0;

    return 0;
}