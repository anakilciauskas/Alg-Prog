/*Calcular a média de um aluno em um semestre com duas provas, onde M
= (P1 + P2) / 2. Se a média for maior ou igual a 5 escreva “aprovado”,
senão calcule e mostre quanto faltou para atingir 5*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	float prov1, prov2, media;
	printf("Insira suas duas notas\n");
	scanf("%f %f", &prov1, &prov2);
	
	media = (prov1+prov2)/2;
	
	if(media >= 5){
		printf("Voce foi aprovado");
	} else {
		printf("Voce nao foi aprovado\n");
		printf("Faltaram %.2f pontos na media para voce ser aprovado", 5-media);
	}
	
	return 0;
}
