#include <stdio.h> // Incluindo a biblioteca stdio.h para entrada e sa�da padr�o
#include <locale.h>

int main() {
    int num1, num2;
    float val;

    setlocale(LC_ALL, "");
    printf("Informe o 1o número");
    scanf("%d",&num1);

    num2 = num1*4;
    printf("Valor de num2: %d/n",num2);
    val = num2/2 + num1;
    printf("Valor de val �: %f", val);
    return 0; // Retorno da fun��o main indicando que o programa terminou com sucesso
}



