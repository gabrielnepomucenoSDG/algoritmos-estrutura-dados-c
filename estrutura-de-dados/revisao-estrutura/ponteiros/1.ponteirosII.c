#include <stdio.h>
#include <stdlib.h>


int main(){
int i;
    typedef struct {
        int vet[3];
    } nums;

    nums ab;

int *pont = ab.vet;

    for (i = 0; i<3; i++){
        printf("Digite o valor %d: ", i);
        scanf("%d",pont+i); //cuidado para não usar o asterisco aqui
    }
    for (i = 0; i<3; i++){
        printf("\n\nValor de ab.vet[%d]: %d\n", i, *(pont+i));
    }


}



/*
Faça um programa para ler 20 números inteiros, calcular a
 média dos mesmos e exibir todos os números que
 estiverem acima da média. Considere a média como sendo
 7.0
*/