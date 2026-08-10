#include<stdio.h>
#include<locale.h>

int main()
{
    float s, aj, saj;
    
    printf("Digite o salário antigo e depois a porcentagem de aumento em formato decimal: ");
    scanf("%f",&s);
    scanf("%f",&aj);
    
    
    saj = s+s*aj;
    printf("O salário reajustado será de %f",saj);
    
    return 0;
}