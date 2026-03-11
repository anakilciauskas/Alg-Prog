/*Receber um número e verificar se ele esta na faixa de 0 à 9. Se sim,
mostre uma mensagem afirmativa, caso contrário mostre uma mensagem
indicando que o número não se encontra na faixa*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	printf("Insira um valor\n");
	scanf("%d", &num);
	
	if((num>=0) && (num<=9)){
		printf("O numero esta na faixa de 0 a 9");
	} else {
		printf("O numero nao esta na faixa de 0 a 9");
	}
	
	return 0;
}
