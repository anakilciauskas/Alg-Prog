#include <stdio.h>
#include <stdlib.h>

int main(){
	float salario; //cria uma variavel do tipo float
	printf("Insira seu salario R$"); //escreve na tela
	scanf("%f", &salario); //le o valor inserido e o atribui a variavel
	
	if(salario<=1000){ //se o valor for menor ou igual a mil
		printf("Seu novo salario e R$%.2f", salario*1.05);
		//escreve na tela e calcula um acrescimo de 5%
	} else { //se nao
		printf("Seu novo salario e R$%.2f", salario*1.07);
		//escreve na tela e calcula um acrescimo de 7%
	}
	
	return 0;
}