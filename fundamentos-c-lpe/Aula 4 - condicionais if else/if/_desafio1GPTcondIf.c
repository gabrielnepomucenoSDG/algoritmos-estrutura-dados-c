#include <stdio.h>

/*1. Escreva um programa em C que solicite ao usuário três números e determine o maior entre eles. 
Você pode usar instruções if para comparar os números ou o operador ternário para fazer a comparação.*/
//TERMINAR

int main(){
	float n1,n2,n3;
	
	printf("Digite tres numeros");
	scanf("%f %f %f",&n1,&n2,&n3);
//quando n1>>> OK
	
	if (n1>n2) {
	 //n1>n2
	 
	 if (n1>n3){
	 //n1>n2&n3
		if(n2>n3){
		//n1>n2>n3
		} else {
		//n1>n3>n2
		}
	 } else {
	 	//n1>>
	 	if (n2>n3) {
	 	
		 } else {
	 	}
	 	
	 }
	 
	
	} else {
		//n2>n1
		if (n2>n3) {
			//n2>>>
			if(n1>n3){
				//n2>n1>n3
			} else {
				//n2>n3>n1
			}
		} else {
		//n3>n2>n1	
		}
		
	}
	
	return 0;
}
