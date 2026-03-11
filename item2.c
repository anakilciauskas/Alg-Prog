#include <stdio.h>
#include <stdlib.h>

int main(){
	int num; //cria uma variavel do tipo inteiro
	printf("Insira um valor\n"); //escreve na tela
	scanf("%d", &num); //le o valor inserido e o atribui a variavel
	
	if((num>=0) && (num<=9)){ //se o numero for maior ou igual a zero
							  //e se o numero for menor ou igual a nove
		printf("O numero esta na faixa de 0 a 9"); //escreve na tela
	} else { //se nao
		printf("O numero nao esta na faixa de 0 a 9"); //escreve na tela
	}
	
	return 0;
}