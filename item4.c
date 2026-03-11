#include <stdio.h>
#include <stdlib.h>

	int main(){
		int ano, dia;
		
		printf("Em que ano voce nasceu?\n");
		scanf("%d", &ano);
		
		dia = (2026-ano)*365;
		printf("Voce tem aprox %d dias de vida", dia);
		
	
		return 0;
	}