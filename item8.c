#include <stdio.h>
#include <stdlib.h>

int main(){
	int minutos; //cria uma variavel do tipo inteiro
	float adic; //cria uma variavel do tipo float
	printf("Insira quantos minutos foram gastos no mes\n"); //escreve na tela
	scanf("%d", &minutos); //le e atribui o valor inserido a variavel
	
	if(minutos>50){ //se o valor for maior que cinquenta
	adic = minutos-50; //calcula quantos minutos adicionais foram usados
	printf("O valor da conta e de R$%.2f", 50+adic*1.50);
	//escreve na tela e calcula o valor do plano mais R$1,50 para cada minuto adicional
	} else { //se nao
		printf("O valor da conta e de R$50.00"); //escreve na tela
	}
	
	return 0;
}