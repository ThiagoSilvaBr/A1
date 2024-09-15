#include <stdio.h>
#include <locale.h>

int main(){
	int grupo, valor, valorTotal;
	printf("Nossa agencia esta oferecendo um pacote de viagem para voce e seus amigos, a partir de 5 amigos o pacote sai por R$1800 cada, para 9 amigos ou mais sai R$1400 cada. \n");
	printf("Digite quantos amigos irá viajar com voce: ");
	scanf("%d", &grupo);
	
	if(grupo > 5 && grupo <9){
		valorTotal = grupo * 1800;
		printf("O valor total da viagem (somado todas as pessoas)será: %d", valorTotal);
	}else if(grupo >=9){
		valorTotal = grupo * 1400;
		printf("O valor total da viagem (somado todas as pessoas)será: %d", valorTotal);
	}else{
		printf("Infelizmente só oferecemos pacote para um grande grupo de pessoas.");
	}
	return 0;
}
