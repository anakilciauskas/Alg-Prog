/*Receber dois números e mostrar o maior deles*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1, num2;
	printf("Escreva dois valores\n");
	scanf("%d %d", &num1, &num2);
	
	if(num1>num2){
		printf("\nO maior numero e %d", num1);
	} else {
		printf("\nO maior numero e %d", num2);
	}
	
	return 0;
}
