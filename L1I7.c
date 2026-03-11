/*Receber uma temperatura em Fahrenheit e convertê-la para Celsius
através da seguinte fórmula: Celsius = (Fahrenheit - 32) / 1.8. 
Exibir o valor em Celsius*/

#include <stdio.h>
#include <stdlib.h>

	int main(){
		float fahr, cels;
		printf("Insira a temperatura em Fahrenheit\n");
		scanf("%f", &fahr);
		
		cels = (fahr - 32)/1.8;
		printf("A temperatura em Celsius e de %.2f", cels);
	
		return 0;
	}
