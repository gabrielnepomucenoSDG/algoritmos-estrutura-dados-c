#include <stdio.h>

void crescente(int *a, int *b){
    if(*a>*b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }

}

int main(){
    int a, b;
    scanf("%d%d",&a,&b);
    printf("ANTES DA FUNCAO - a: %d, b: %d",a,b);
    crescente(&a,&b);
    printf("DEPOIS DA FUNÇÃO - a: %d, b: %d",a,b);



}