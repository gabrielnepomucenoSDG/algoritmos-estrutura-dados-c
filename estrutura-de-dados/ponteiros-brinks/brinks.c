#include <stdio.h>
//
// ponteiro é uma variável...
// ...que serve para apontar para outra
// ele guarda um dado do tipo endereço de memória (%p)
// tipo *nome = &variavel_apontada;
// & - "endereço de fulano"; ex: "&a" significa "endereço de a"
// * - serve para criar o ponteiro; ou para acessar a variável apontada; ex: " *b " significa "apontado por b"
// deve ser do mesmo tipo da variável criada

int main(){
int n = 18;
int *ptr = &n;

printf("%p", *ptr);

}