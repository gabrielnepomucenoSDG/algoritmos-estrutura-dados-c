#include<stdio.h>
#include<locale.h>

int main()
{
    float c, f;
    
    printf("Digite uma temperatura em graus Celsius");
    scanf("%f",&c);
    
    f = 1.8*c+32;
    printf("A temperatura em graus Farenheit é %f",f);
    
    return 0;
}