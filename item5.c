#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1, num2; //cria duas variaveis do tipo inteiro
	printf("Escreva dois valores\n"); //escreve na tela
	scanf("%d %d", &num1, &num2); //le os valores inseridos e os atribui as variaveis
	
	if(num1>num2){ //se o primeiro numero for maior que o segundo
		printf("\nO maior numero e %d", num1); //escreve na tela o primeiro numero
	} else { //se nao
		printf("\nO maior numero e %d", num2); //escreve na tela o segundo numero
	}
	
	return 0;
}