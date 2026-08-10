#include <stdio.h>

int main() {
   float s, em;
    printf("Digite seu salario: R$ ");
    scanf("%f", &s);
    printf("\nDigite o valor desejado para emprestimo: R$");
    scanf("%f",&em);

    em < 0.2*s ? printf("\nEmpréstimo concedido.") : printf("\nEmprestimo não concedido.");

    return 0;
}