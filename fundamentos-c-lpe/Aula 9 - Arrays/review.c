#include <stdio.h>
#include <string.h>

int main(){
char nomes[4][3][80];
char nome[80];
int i, j, in, jn;
in = jn = -1;

printf("Vamos preencher uma matriz com 12 nomes.\n\n");
for (i=0;i<4;i++){

	for (j=0;j<3;j++){
	scanf("%s",&nomes[i][j]);
    printf("%s\n\n",nomes[i][j]);
	}
}

printf("Agora, me diga um nome para eu ver se acho na lista que você preencheu.\n");
scanf("%s",&nome);
//printf("%s",&nome);

for (i = 0; i<4; i++){
	for (j=0;j<3;j++){
        if (strcmp(nome,nomes[i][j])==0){
            in = i;
            jn = j;
            printf("O nome foi encontrado na seguinte posição: [%d][%d]\n",in,jn);
            printf("Posicao [%d][%d]: %s\n",i,j,nomes[i][j]);
        }
	}
}
if (in<0)
	printf("O nome não foi encontrado.");
}

