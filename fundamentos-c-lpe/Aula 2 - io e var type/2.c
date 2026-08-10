#include <stdio.h>
#include <locale.h>
/* 1) Faça um programa que imprima seu nome completo só que da seguinte
 forma: 1º nome na 1ª linha, 2º nome na 2ª linha e assim sucessivamente.
 2) Faça um programa que imprima as seguintes informações e no seguinte
 formato:
  Endereço: (coloque aqui seu endereço) CEP: (coloque seu CEP)
  Fone: (no seguinte formato (098) 9555-8888
  Município: (coloque seu município)
 Estado: (por extenso)
 Sigla:
 3) Faça um programa que escreva na tela todos os meses do ano, um em cada
 linha, e do lado de cada mês o número corresponde ao mês*/

int main(){
    setlocale(LC_ALL, "");
    printf("Endereço: Rua Fé em Deus, n.7 CEP: 65066-661\n Fone: (098) 92415558\n Município: São Luís\n Estado: Maranhão\nSigla: MA");

    return 0;
}