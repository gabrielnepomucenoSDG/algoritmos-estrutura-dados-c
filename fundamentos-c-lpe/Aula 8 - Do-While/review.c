#include <stdio.h>

int main () {
/*Escreva um programa que receba uma quantidade indeterminada de números positivos e diga quantos deles estão no intervalo de 0 a 25, quantos estão no intervalo de 26 a 50 e quantos são maiores que 50. O programa deve parar quando o usuário digitar um número negativo.*/
float n;
int i025,i2650,i50plus;
i025 = i2650 = i50plus = 0;


do {
    printf("Digite um número: ");
    scanf("%f",&n);
    if (n<26)
        i025 += 1;
    else if (n<50)
        i2650 += 1;
    else
        i50plus += 1;
} while (n>=0);

printf("Contagem\n%d estão entre 0 e 25\n%d estão entre 26 e 50\n%d são maiores que 50",i025,i2650,i50plus);


return 0;
}