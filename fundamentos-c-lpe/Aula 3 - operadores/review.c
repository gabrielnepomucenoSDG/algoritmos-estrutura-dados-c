#include <stdio.h>
#include <math.h>


int main() {
float a, b, c, d, x1, x2;
printf("Digite os valores dos coeficientes a, b e c da sua equação do segundo grau\n");
scanf("%f%f%f",&a,&b,&c);
printf("A equacao eh: (%.2fx*x) + (%.2fx) + (%.2f) = 0\n", a, b, c);
d = b*b - 4*a*c;
printf("Delta: %f\n\n",d);

if (d>0){
x1 = ((b * -1) + sqrt(d))/(2*a);
x2 = ((b * -1) - sqrt(d))/(2*a);
printf("Raiz 1: %f\nRaiz 2: %f\n", x1, x2);

} else if (d == 0) {
x1 = x2 = (b * -1)/(2*a);
printf("Possui uma unica raiz: %f\n", x1);

} else if (d<0)
printf("Não existem raízes reais.\n");




}