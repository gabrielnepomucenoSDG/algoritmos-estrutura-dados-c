#include <stdio.h>



int main (){
	
	int m [3][3];
	int somas [3];
	int somalinha = 0;
	int i,j;
	
	
	for (i = 0; i < 3; i++) {
		
		for (j = 0; j < 3; j++){
			//preenchendo a matriz de inputs
			printf("Digite o [%d][%d]: ",i,j);
			scanf("%d",&m[i][j]);
		
		}
		
		

	
	}
	
	for (i = 0; i < 3; i++) {
		
		for (j = 0; j < 3; j++){
			//preenchendo o array de somas
			somalinha += m[j][i];
			
		
		}
		somas[i] = somalinha;
		somalinha = 0;
		
		
	
	}
	
	//imprimindo a matriz
	printf("Matriz:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
		
		printf("%d  ",m[i][j]);
		
		
		}
		
		printf("\n");
	
	
	}
	
	//imprimindo o array de somas
	printf("Somas:\n");
	for (i = 0; i < 3; i++){
		printf("%d   ", somas[i]);
	
	}

}
