
//criar a pilha

typedef struct item {
    int valor;
    struct item * prox;
} item;

item * topo = NULL;

void push(int valor){
    item * novo = (item*)malloc(sizeof(item));
        if(!novo){
            printf("Erro na alocação dinamica");
            return;
        }
    novo->valor =  20;
    novo->prox = topo;
    topo = novo;
}

void pop(){
//verificar se a pilha está vazia
if(topo == NULL){
    printf("Pilha já está vazia.");
    return;
}
    item * temp = topo;
    topo = temp->prox;
    free(temp);
}


void isEmpty(){
    if (topo == NULL){
        printf("Pilha está vazia");
        return;
    }
}

void destroy(){
    while(topo!=NULL){
        pop();
    }
}

int(){
push(15);
push(20);
pop();

destroy();


}
