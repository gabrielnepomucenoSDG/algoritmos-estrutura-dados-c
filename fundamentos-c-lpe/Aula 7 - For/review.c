#include <stdio.h>

int main () {
/*Escreva umalgoritmo que leia as duas notas de cinco alunos de uma turma, calcule e mostre: • Amédiaaritméticade cada aluno; • amensagemdealuno reprovado, caso a média seja menor que 6.0; a mensagem de aluno emrecuperação, caso a média esteja entre 6.0 e 7.0; a mensagem de aluno aprovado, caso amédiaseja maior ou igual a 7.0; • o total de alunos aprovados, o total de alunos reprovados e o o total de alunos em recuperação; • amédiageraldaturma*/

float nota1, nota2, media, somaturma;
int i, ap, rec, rep;
ap = rec = rep = 0;
somaturma = 0;

//recebimento (n1, n2, com for), processamento (media) e exibição da situação do aluno (aprovado, recuperação ou reprovado)
for (i=0;i<5;i++){
	printf("Aluno %d:\nDigite as notas 1 e 2\n",i+1);
	scanf("%f%f",&nota1,&nota2);
	media = (nota1+nota2)/2;
    printf("Media: %f\n",media);
	if (media<6) {
		printf("Situação: reprovado\n\n");
		rep += 1;
	} else if (media<7) {
		printf("Situação: em recuperação\n\n");
		rec += 1;
	} else {
		printf("Situação: aprovado!\n\n");
		ap += 1;
	}
	
	somaturma += media;
	
}

//exibição da situação da sala (contagem aprovados, em recuperação e aprovados; media da turma)
printf("Situação da turma\nTotal de aprovados: %d\nTotal em recuperação: %d\nTotal de reprovados: %d\nMedia da turma: %.2f",ap,rec,rep,somaturma/5);

}

//erros: esquecer de atender todos os requisitos