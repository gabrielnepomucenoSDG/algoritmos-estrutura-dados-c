#include <stdio.h>

int main (){
    float r1, r2, req;

    do {
        //recebe e valida r1
        do {
            printf("Digite r1: ");
            scanf("%f",&r1);

            if (r1 < 0)
                printf("Erro: valor negativo.");
        } while (r1 < 0);
        
        //recebe e valida r2
        do {
            printf("Digite o valor de r2: ");
            scanf("%f",&r2);

            if (r2 < 0)
                printf("Erro: valor negativo digitado. ");
        } while (r2 < 0);

        //calcula a resistencia equivalente. vou colocar o calculo dentro de um if pq se r1 + r2 for igual a 0, então vai dar um erro de divisão por zero
        if (r1 + r2 != 0)
            req = (r1*r2)/(r1+r2);

        //exibe o resultado
        printf("Req = %f", req);

    } while (r1 != 0 && r2 != 0); //somente enquanto forem diferentes de zero
}