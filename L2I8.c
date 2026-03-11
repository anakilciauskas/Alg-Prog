/*Você assina um plano de 50 minutos no celular que custa R$ 50.00 por
mês, independente de utilizá-los integralmente ou não. Porém, se você
utilizar mais do que 50 minutos, é cobrado mais R$ 1.50 por cada minuto
que passar dos 50 do seu plano. Receber quantos minutos foram gastos
no mês e calcular o valor da conta*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int minutos;
	float adic;
	printf("Insira quantos minutos foram gastos no mes\n");
	scanf("%d", &minutos);
	
	if(minutos>50){
	adic = minutos-50;
	printf("O valor da conta e de R$%.2f", 50+adic*1.50);
	} else {
		printf("O valor da conta e de R$50.00");
	}
	
	return 0;
}
