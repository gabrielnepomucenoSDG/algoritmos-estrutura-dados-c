#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "");

int i, j, maiordetodos=0, menordalinha;
int matriz[2][2];


//valores iniciais
for(i=0; i<2; i++){
    for(j=0; j<2; j++){
        printf("insira um valor na matriz!\n");
        scanf("%d",&matriz[i][j]);
    }
}


//maior de todos
for(i=0; i<2; i++){
    for(j=0; j<2; j++){
        if(matriz[i][j]>maiordetodos)
            maiordetodos=matriz[i][j];
    }
}
printf("Maior valor da matriz: %d\n", maiordetodos);


//menorporlinha
for(i=0; i<2; i++){
    for(j=0; j<2; j++){
        if(j==0)
            menordalinha = matriz[i][j];

        if(matriz[i][j]<menordalinha)
            menordalinha=matriz[i][j];
    }
    printf("menor valor da linha %d: %d\n", i, menordalinha);
}




}