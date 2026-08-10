#include <stdio.h>

int main (){
    int opiniao, idade, i, quantidade_bom, quantidade_ruim, soma_idade_ruim;
    opiniao = idade = i = quantidade_bom = quantidade_ruim = soma_idade_ruim = 0; //inicializando com um valor para não ter lixo nelas
    float media = 0;

    for (i=0; i<800; i++){ //repetir até dar 800 

        // recebe e valida "opiniao"
        do {
            printf("Digite sua opinião (1 - bom; 2 - ruim): ");
            scanf("%d",&opiniao);
            
            if (opiniao!=1 && opiniao!=2)
                printf("Erro: Numero invalido. Digite 1 para bom ou 2 para ruim.");
        } while (opiniao != 1 && opiniao != 2);
        
        // recebe e valida "idade"
        do {
            printf("Digite sua idade: ");
            scanf("%d",&idade);

            if (idade<0)
                printf("Erro: idade negativa");
        } while (idade < 0);

        // processamento
        if (opiniao == 1)
            quantidade_bom++;
        

        if (opiniao == 2) {
            quantidade_ruim++;
            soma_idade_ruim += idade; //vai somando as idades de quem tem opinião = 2 (ruim); Vamos usar para calcular a média
        }

    }

    //a) media de idade das pessoas que acharam o filme ruim
    media = soma_idade_ruim/quantidade_ruim;
    printf("A media de idade dos que acharam o filme ruim foi: %f", media);

    //b) qual opiniao prevaleceu
    if (quantidade_bom > quantidade_ruim)
        printf("A opinião que prevaleceu foi boa.");
    if (quantidade_ruim > quantidade_bom)
        printf("A opinião que prevaleceu foi ruim");
    if (quantidade_bom == quantidade_ruim)
        printf("Nenhuma opiniao prevaleceu. Teve um empate.");

}