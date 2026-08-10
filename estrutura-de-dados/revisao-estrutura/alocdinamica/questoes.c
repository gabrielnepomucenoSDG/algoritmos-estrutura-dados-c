#include <stdio.h>
#include <stdlib.h> //para usar alocação dinâmica e o NULL dentro dos ponteiros


int main(){
int *p = NULL;
int n = 0;
int i = 0;
int par = 0;
int soma = 0;
float media = 0;

printf("Informa aí pae, o tamanho do vetor de inteiros: ");
scanf("%d",&n);

p = (int *) malloc(n*sizeof(int)); //vetor criado



for (i = 0; i<n; i++){
    printf("Digite o valor da posição %d: ",i);
    scanf("%d", &p[i]); //não esquece de especificar a posição
}


//    printf("Valor do vetor na posição i: %d", p[i]);

for(i = n-1; i>=0; i--){
//    printf("Executou %d vezes",i);
    printf("Valor do vetor na posição i: %d\n", p[i]);

}



for (i = 0; i<n; i++){
    if(p[i]%2 == 0){
        par++;
        soma += p[i];
    }

}

printf("Quantidade de pares: %d\n", par);

media = soma/par;

printf("Média de números pares: %f",media);







}



/*
 Implemente dinamicamente o vetor para as situações, abaixo:
     Criar um vetor cujo tamanho será informado pelo usuário em tempo de
 execução;
    Inicializar o vetor com valores fornecidos pelo usuário;
    Exibir todos valores da última até a 1ª posição;
    Calcular e exibir a quantidade de números pares;
    Calcular e exibir a média de todos os valores
*/