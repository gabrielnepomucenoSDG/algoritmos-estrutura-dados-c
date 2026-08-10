#include <stdio.h>
#include <stdlib.h>

void mediaf(float mp, float pf){
printf("Sua média final foi %.2f.", (6*mp+4*pf)/10);

}



int main() {
float mediap = 0;
float provaf = 0;
float mediafinal = 0;

printf("Vamos calcular a média final e ver se você passou?\n");
printf("Digite a nota que você tirou na prova final: ");
scanf("%f",&provaf);
printf("Agora digite a média das notas nas provas regulares: ");
scanf("%f",&mediap);

mediaf(mediap,provaf);


}





/*
1. Escreva uma função que calcula a média final de um aluno que fez prova final em uma disci
plina. A função deve receber a média parcial do aluno (média das notas nas provas regulares da
 disciplina) e a nota obtida na prova final. O cálculo para a média final é
 MF = 6 MP+4 PF
      ---------
          10
 onde MF é a média final, MP é a média parcial e PF é a nota da prova
 f
 inal. Escreva um programa que utiliza esta função, pedindo os dados necessários ao usuário e
 imprimindo o valor da média final na tela.
*/