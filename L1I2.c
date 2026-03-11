/*Receber dois valores, calcular sua média aritmética e exibir o resultado*/

#include <stdio.h>
#include <stdlib.h>

	int main(){
		int num1, num2;
		float media;
		
		printf("Insira o primeiro valor\n");
		scanf("%i", &num1);
		fflush(stdin);
		printf("Insira o segundo valor\n");
		scanf("%i", &num2);
		fflush(stdin);
		
		media = (num1+num2)/2;
		printf("A media e %.2f\n", media);
	
		return 0;
	}
