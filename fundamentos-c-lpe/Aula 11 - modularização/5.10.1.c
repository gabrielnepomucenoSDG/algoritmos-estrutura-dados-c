#include <stdio.h>

/*1. Escreva uma função que calcula a média final de um aluno que fez prova final em uma disci
plina. A função deve receber a média parcial do aluno (média das notas nas provas regulares da
 disciplina) e a nota obtida na prova final. O cálculo para a média final é
 MF = 6 MP+4 PF
 10
 onde MF é a média final, MP é a média parcial e PF é a nota da prova
 f
 inal. Escreva um programa que utiliza esta função, pedindo os dados necessários ao usuário e
 imprimindo o valor da média final na tela.*/


float MF(float MP, float NPF){
return (6*MP + 4*NPF)/10;	
}


int main (){
float n1, n2, n3, mediaparcial, mediafinal;

printf("Digite a nota 1, a nota 2 e a nota 3: \n");
scanf("%f%f%f",&n1,&n2,&n3);

mediaparcial = (n1+n2)/2;
mediafinal = MF(mediaparcial,n3);
printf("%f\n",mediafinal);

}

//erros: tem que deixar explícito o tipo de cada parâmetro durante a criação (não dá pra escrever o tipo uma vez só e depois só botar os nomes das variáveis que tem esse tipo. EX float n1, n2, n3)