#include <stdio.h>
#include <stdlib.h>



int main() {
    char *p = NULL;
    p = (char*) malloc(21); //vai capturar apenas 20

    printf("Digite seu nome: ");
    gets(p); //prefira fgets() para prevenir estouro de buffer

    printf("%s", p);
    //não precisamos usar asterisco para referenciar a variável apontada, porque ela não existe. O p é a variável que armazena nossos conteúdos (ou pelo menos se comporta como se fosse).
    // utilizar na quantidade de bytes n*tamanho, para transformar p em um array.

}