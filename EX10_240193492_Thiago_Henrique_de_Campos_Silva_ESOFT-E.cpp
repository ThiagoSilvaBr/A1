#include <stdio.h>
#include <locale.h>

int main(){
	int soma, cont, nota;
	float media;
	
	
	for(cont = 0; cont < 11; cont++){
		printf("Digite sua nota: ", cont);
	scanf("%d", &nota);
		soma = soma + nota;
		media = soma/10;
		printf("A média é %.2f \n", media);
	} if(media < 60.0){
		printf("REPROVADO!!!");
	} else{
		printf("Aprovado!");
	}
	return 0;
}
