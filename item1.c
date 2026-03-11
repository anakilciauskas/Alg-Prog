#include <stdio.h>
#include <stdlib.h>

int main(){
	int num; //cria uma variavel do tipo inteiro
	printf("Insira um valor\n"); //mostra na tela
	scanf("%d", &num); //le o valor inserido pelo usuario
	
	if(num>=0){ //se o valor for igual ou maior que zero
		printf("O valor e positivo"); //escreve na tela
	} else { //se nao
		printf("O valor e negativo"); //escreve na tela
	}
	
	return 0;
}