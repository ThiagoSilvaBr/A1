#include <stdio.h>
#include <locale.h>
int main(){
	int valor, nota5, nota10, nota20, nota50, nota100;
	printf("Digite o valor que deseja receber em troco: \n");
	scanf("%d", &valor);
	
	if(valor > 6){
		nota100 = valor/100;
		valor %= 100;
	}else if(valor > 0){
		nota50 = valor/50;
		valor %=50;
	}else if(valor > 0){
		nota20 = valor/20;
		valor %= 20;
	}else if(valor > 0){
		nota10 = valor/10;
		valor%= 10;
	}else if(valor > 0){
		nota5 = valor/5;
		valor%= 5;
	}else{
		printf("Digite um valor valido.");
		
	}
		printf("Trocos: \n");
		if(nota100>0){
			printf("R$100: %d nota (s) \n", nota100);
		}else if(nota50>0){
			printf("R$50: %d nota (s) \n", nota50);
		}else if(nota20>0){
			printf("R$20: %d nota (s) \n", nota20);
		}else if(nota10>0){
			printf("R$10: %d nota (s) \n", nota10);
		}else if(nota5>0){
			printf("R$5: %d nota (s) \n", nota5);
		}else{
			printf("Digite um valor valido.");
		}
	
	
	return 0;
}
