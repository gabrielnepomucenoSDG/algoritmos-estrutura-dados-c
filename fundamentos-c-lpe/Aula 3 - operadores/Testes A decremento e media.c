#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
/*	float n1, n2, n3, n4, n5, media;
	
	printf("Nota 1: ");
	scanf("%f", &n1);
	
	printf("Nota 2: ");
	scanf("%f", &n2);
	
	printf("Nota 3: ");
	scanf("%f", &n3);
	
	printf("Nota 4: ");
	scanf("%f", &n4);
	
	printf("Nota 5: ");
	scanf("%f", &n5);
	
	media = (n1+n2+n3+n4+n5)/5.0;
	printf("A média das 5 notas é: %f", media);
*/

	int n;
	
	printf("Digita um número aí: ");
	scanf("%d", &n);
	
	printf("%d \n", ++n);
	n--;
	printf("%d", --n);
	
	return 0;
}
