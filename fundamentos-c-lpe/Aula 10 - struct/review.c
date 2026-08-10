#include <stdio.h>

int main () {
//Versão 1
/**
int n1;
int n2;
printf("Digite os valores de n1 e n2: \n");
scanf("%d%d",&n1,&n2);
printf("%d",n1+n2);
/**/


//Versão 2
/**
int n[2];
printf("Digite os valores de n1 e n2: \n");
scanf("%d%d",&n[0],&n[1]);
printf("%d",n[0]+n[1]);
/**/

//Versão 3
/**
struct ns {
	int n1;
	int n2;
};

struct ns a;

printf("Digite os valores de n1 e n2: \n");
scanf("%d%d",&a.n1,&a.n2);

printf("%d",a.n1+a.n2);
/**/


//Versão 4
/**
typedef struct ns {
	int n1;
	int n2;
} nn;

nn n[1];

printf("Digite os valores de n1 e n2: \n");
scanf("%d%d",&n[0].n1,&n[0].n2);
printf("%d",n[0].n1+n[0].n2);
/**/

//Versão 5
/**
typedef struct {
	int nx[2];
} nn;

nn a;

printf("Digite os valores de n1 e n2: \n");
scanf("%d%d",&a.nx[0],&a.nx[1]);
printf("%d",a.nx[0]+a.nx[1]);
/**/
}