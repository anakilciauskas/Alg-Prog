#include <stdio.h>

	int main(){
		float alt; //declara uma variavel do tipo float
		printf("qual sua altura em m?\n"); //exibe a frase na tela
		scanf("%f", &alt); //le o valor digitado pelo usuario e o atribui a variavel
		printf("sua altura em metros e %.2f", alt); //exibe na tela a frase o valor da variavel com duas casas decimais
		
		return 0;
	}
	