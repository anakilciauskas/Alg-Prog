#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1, num2; //cria duas variaveis do tipo inteiro
	printf("Escreva dois valores\n"); //escreve na tela
	scanf("%d %d", &num1, &num2); //le os valores inseridos e os atribui as variaveis

	if(num1>num2){
		printf("Os valores em ordem crescente sao:\n%d\n%d", num2, num1);
	}
	if(num1<num2){
		printf("Os valores em ordem crescente sao:\n%d\n%d", num1, num2);
	}

	return 0;
}