#include <stdio.h>
#include <stdlib.h>

	int main(){
		float metro, cent;
		printf("Insira um valor em metros\n");
		scanf("%f", &metro);
		
		cent = metro*100;
		printf("O valor em centimetro e de %.2f", cent);
	
		return 0;
	}