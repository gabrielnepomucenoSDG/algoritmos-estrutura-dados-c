#include <stdio.h>

int main (){
//diferenca
//entre
//soma dos quadrados
//e
//quadrado da soma
//dos
//50 primeiros numeros naturais maiores que zero (de 1 a 50)

   int i, diferenca, soma_numeros, quadrado_da_soma_numeros, soma_quadrados;
    i = diferenca = soma_numeros = quadrado_da_soma_numeros = soma_quadrados = 0; //colocando zero nelas para evitar que tenham lixo dentro
    
    for (i=1; i<51; i++) { //conta de 1 até 50
        soma_numeros += i; //vai somando os numeros contados
        soma_quadrados += i*i; //vai somando o quadrado dos numeros contados
    }
    
    
    quadrado_da_soma_numeros = soma_numeros * soma_numeros; //calcula o quadrado da soma
    diferenca = soma_quadrados - quadrado_da_soma_numeros; //calcula a diferenca


    printf("%d",diferenca); //exibe a diferenca


}