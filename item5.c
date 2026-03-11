#include <stdio.h>
#include <stdlib.h>

	int main(){
		int num1, num2, media, resto;
		
		printf("Insira o primeiro valor\n");
		scanf("%d", &num1);
		fflush(stdin);
		printf("Insira o segundo valor\n");
		scanf("%d", &num2);
		fflush(stdin);
		
		media = num1/num2;
		resto = num1%num2;
		printf("O resultado da divisao e %d, com resto %d", media, resto);
	
		return 0;
	}