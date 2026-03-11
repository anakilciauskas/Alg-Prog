/*Receber numerador e denominador. Calcular e mostrar o resultado da
divisão, desde que possível (denominador diferente de zero). Se não for
possível dividir, apenas escreva “não existe divisão por zero”*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	float num1, num2;
	printf("Insira um valor para o nominador\n");
	scanf("%f", &num1);
	fflush(stdin);
	printf("\nInsira um valor para o denominador\n");
	scanf("%f", &num2);
	
	if(num2 != 0){
		printf("\nO resultado da divisao e %.2f", num1/num2);
	} else {
		printf("Nao existe divisao por 0");
	}
	
	return 0;
}
