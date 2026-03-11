#include <stdio.h>
#include <stdlib.h>

int main(){
	float num1, num2; //cria duas variaveis do tipo float
	printf("Insira um valor para o nominador\n"); //escreve na tela
	scanf("%f", &num1); //le o valor inserido e o atribui a variavel
	fflush(stdin); //limpa os caracteres do buffer
	printf("\nInsira um valor para o denominador\n");
	scanf("%f", &num2);
	
	if(num2 != 0){ //se o denominador for diferente de zero
		printf("\nO resultado da divisao e %.2f", num1/num2);
		//escreve na tela e divide as variaveis
	} else { //se nao
		printf("Nao existe divisao por 0");
	}
	
	return 0;
}