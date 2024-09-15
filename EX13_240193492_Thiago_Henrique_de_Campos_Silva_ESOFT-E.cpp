#include <stdio.h>
#include <locale.h>
int main(){
	int pontos;
	printf("Nossa empresa avalia voce pela sua pontuação, em niveis de Base, Medio e Premium. Quanto maior sua pontuação, maior o seu nivel. \n");
	printf("Digite sua quantidade de pontos: ");
	scanf("%d", &pontos);
	
	if(pontos < 501){
		printf("Seu nivel eh Base");
	}else if(pontos >= 501 && pontos < 1300){
		printf("Seu nivel eh Medio");
	}else if(pontos >= 1301){
		printf("Seu nivel eh Premium");
	}
	return 0;
}
