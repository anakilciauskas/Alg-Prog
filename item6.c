#include <stdio.h>

	int main(){
		int idade; //declara uma variavel do tipo inteiro
		printf("qual sua idade?\n"); //exibe na tela a frase
		scanf("%d", &idade); //le o valor recebido pelo usuario e o atribui a variavel
		printf("A idade e %d", idade); //exibe na tela a frase com o valor da variavel
		
		return 0;
	}
	