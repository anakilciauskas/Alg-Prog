/*Receber dois números e os apresente em ordem crescente. Utilize
apenas a estrutura de decisão if, ou seja, sem o opcional else*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1, num2;
	printf("Escreva dois valores\n");
	scanf("%d %d", &num1, &num2);

	if(num1>num2){
		printf("Os valores em ordem crescente sao:\n%d\n%d", num2, num1);
	}
	if(num1<num2){
		printf("Os valores em ordem crescente sao:\n%d\n%d", num1, num2);
	}

	return 0;
}
