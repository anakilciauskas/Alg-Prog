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