#include <stdio.h>
#include <stdlib.h>

	int main(){
		float base, alt, area;
		printf("Insira o valor da base do triangulo\n");
		scanf("%f", &base);
		fflush(stdin);
		printf("Insira o valor da altura do triangulo\n");
		scanf("%f", &alt);
		fflush(stdin);
		
		area = (base*alt)/2;
		printf("A area do triangulo e %.2f", area);
	
		return 0;
	}