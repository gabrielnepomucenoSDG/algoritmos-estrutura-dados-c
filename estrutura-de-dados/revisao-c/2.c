#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_Brazil.1252");

int i, j, matriz[4][4], input, maiores=0;
float mediaDP = 0;


//Valores iniciais da matriz
for(i=0; i<4; i++){
    for(j=0; j<4; j++){
        printf("Insira um valor na matriz!\n");
        scanf("%d",&matriz[i][j]);
    }
}

//Média na diagonal principal
for(i=0; i<4; i++){
    mediaDP+=matriz[i][i];
}
printf("media diagonal principal: %.1f\n",mediaDP/4);


//Verificação se há um valor maior que o do usuário
printf("insira um valor para eu verificar se há maiores na matriz\n");
scanf("%d",&input);

for(i=0; i<4; i++){
    for(j=0; j<4; j++){
        if(matriz[i][j]>input) {
            printf("Um valor maior foi encontrado em %d,%d: %d\n", i, j, matriz[i][j]);
            maiores++;
        }
    }
}
if(maiores==0)
    printf("Não encontrei nenhum número maior que esse.");





}