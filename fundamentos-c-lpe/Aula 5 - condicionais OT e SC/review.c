#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d",&idade);

    switch (idade) {
    case 1 ... 17:
    printf("Você é menor de idade.");
    break;

    case 18 ... 150:
    printf("Você é maior de idade.");
    break;

    case 151 ... 200:
    printf("Acho que você digitou sua idade errado. Não vivemos mais por tanto tempo.");
    break;

    default:
    printf("Você digitou a idade errado.");
    break;

}
    idade < 0 ? printf("Você digitou a idade negativa."):(printf("Você digitou uma idade positiva"),printf("\nVocê pode tirar a carteira, mas também pode ser preso."));
//  condicao ? se sim:se nao;


}