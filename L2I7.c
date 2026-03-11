/*Implemente um programa que calcule aumento de salário no ano
corrente. Se o salário for de até R$ 1000.00 deve ser calculado 
o novo salário com aumento de 5%, para um salário maior que 
R$ 1000.00 o aumento é de 7%*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	float salario;
	printf("Insira seu salario R$");
	scanf("%f", &salario);
	
	if(salario<=1000){
		printf("Seu novo salario e R$%.2f", salario*1.05);
	} else {
		printf("Seu novo salario e R$%.2f", salario*1.07);
	}
	
	return 0;
}
