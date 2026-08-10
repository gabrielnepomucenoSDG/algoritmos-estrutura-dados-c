#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct page {
    char url[100];
    struct page* prox;
} page;

page* topo = NULL;

void push(const char* nurl) {
    page* novo = (page*)malloc(sizeof(page));
    if (novo == NULL) {
        printf("Erro ao alocar memória.\n");
        return;
    }
    strcpy(novo->url, nurl); // Corrigido: usa strcpy para copiar strings
    novo->prox = topo;
    topo = novo;
}

void pop() {
    if (topo == NULL) {
        printf("A pilha está vazia.\n");
        return;
    }
    page* temp = topo;
    topo = topo->prox;
    free(temp);
}

void peek() {
    if (topo == NULL) {
        printf("A pilha está vazia.\n");
        return;
    }
    printf("A URL atual é: %s\n", topo->url);
}

void destroy() {
    while (topo != NULL) {
        pop();
    }
    printf("Histórico completamente excluído.\n");
}

int main() {
    int action = 1;

    while (action) {
        do {
            printf("Digite a opção desejada. 1 - entrar em nova URL, 2 - remover URL atual, 3 - ver a URL atual, 4 - apagar todo o histórico, 0 - encerrar programa\n");
            scanf("%d", &action);
            if (action < 0 || action > 4)
                printf("\nPor favor, digite um valor inteiro entre 0 e 4.\n");
        } while (action < 0 || action > 4);

        switch (action) {
            case 0:
                return 0;
            case 1: {
                char url[100];
                printf("Digite a URL para a qual deseja ir:\n");
                scanf("%s", url);
                push(url);
                break;
            }
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                destroy();
                break;
            default:
                printf("Valor digitado inválido.\n");
        }
    }
    printf("Programa encerrado.\n");
    return 0;
}
