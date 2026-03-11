/*Receber um número e informar se ele é negativo ou não é negativo*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	printf("Insira um valor\n");
	scanf("%d", &num);
	
	if(num>=0){
		printf("O valor e positivo");
	} else {
		printf("O valor e negativo");
	}
	
	return 0;
}
