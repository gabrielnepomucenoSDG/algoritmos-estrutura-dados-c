#include <stdio.h>

typedef struct {
    float salario;
    int idade;
    int nfilhos;
    char sexo;

} pesquisado;


int main() {
    float somasal, somaidades;
    int i, nm4_500;
    nm4_500 = 0;
    pesquisado p[20];
    somasal = somaidades = 0;

    for (i=0; i<20; i++){

        do {
            printf("Digite o salario do pesquisado %d",i+1);
            scanf("%f",&p[i].salario);
            if(p[i].salario<0)
                printf("erro: salario negativo\n");
        } while (p[i].salario<0);
        somasal += p[i].salario;
        
        do {
            printf("Digite a idade do pesquisado %d",i+1);
            scanf("%d",&p[i].idade);
            if(p[i].idade<1||p[i].idade>150)
                printf("erro: idade negativa ou ++grande");
        } while (p[i].idade<1||p[i].idade>150);
        somaidades += p[i].idade;

        do {
            printf("Digite o numero de filhos do pesquisado %d",i+1);
            scanf("%d",&p[i].nfilhos);
            if(p[i].nfilhos<0)
                printf("erro: numero negativo");
        } while (p[i].nfilhos<0);

        do {
            printf("Digite o sexo do pesquisado %d\n",i+1);
            scanf(" %c",&p[i].sexo);
            printf("%c\n",p[i].sexo);
            if(p[i].sexo!='M'&&p[i].sexo!='F')
                printf("erro: sexo invalido (digite 'M' ou 'F')");
        } while (p[i].sexo!='M' && p[i].sexo!='F');
    }

    printf("Media salarial: %f",somasal/20);
    printf("Media das idades: %f",somaidades/20);

    for (i=0;i<20;i++){
        if(p[i].sexo=='F')
            if(p[i].salario>4500.00)
                nm4_500 += 1;
            
        
    }

    printf("Mulheres com salario maior que R$ 4.500,00: %d", nm4_500);

}