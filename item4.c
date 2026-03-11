#include <stdio.h>
#include <stdlib.h>

int main(){
	float prov1, prov2, media; //cria tres variaveis do tipo float
	printf("Insira suas duas notas\n"); //escreve na tela
	scanf("%f %f", &prov1, &prov2); //le os valores inseridos e os atribui as variaveis
	
	media = (prov1+prov2)/2; //atribui o resultado da media dos valores a variavel
	
	if(media >= 5){ //se a media for maior ou igual a cinco
		printf("Voce foi aprovado"); //escreve na tela
	} else { //se nao
		printf("Voce nao foi aprovado\n"); //escreve na tela
		printf("Faltaram %.2f pontos na media para voce ser aprovado", 5-media); 
		//escreve na tela e calcula quanto falta para atingir a media
	}
	
	return 0;
}