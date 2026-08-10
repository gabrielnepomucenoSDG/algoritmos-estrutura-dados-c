#include <stdio.h>
#include <stdlib.h>


int main (){
    typedef struct {
        int dia, mes, ano;
    } data;

    data niver;
    data *p = &niver;
    
    niver.dia = 11;
    niver.mes = 6;
    niver.ano = 2003;

    printf("%d\n",p->dia); //" p-> " corresponde a " *p. "
    printf("%d",(*p).dia);


}