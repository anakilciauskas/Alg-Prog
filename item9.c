#include <stdio.h>
#include <stdlib.h>

int main(){
	int ano; //cria uma variavel do tipo inteiro
	printf("Insira o ano "); //escreve na tela
	scanf("%d", &ano); //le e atribui o valor inserido a variavel
	
	if(((ano%4 == 0) && (ano%100 != 0)) || (ano%400 == 0)){
	//se o ano for divisivel por quatro e nao por cem, ou for divisivel por quatrocentos
		printf("\nAno Bissexto"); //escreve na tela
	} else { //se nao
		printf("\nAno Nao-Bissexto"); //escreve na tela
	}
	
	return 0;
}