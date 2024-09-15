#include <stdio.h>
#include <locale.h>
int main(){
	float valor;
		printf("Escreva o valor da compra: ");
		scanf("%f",&valor);
	
	if(valor <= 100){
		printf("Nao há desconto.");
		
	}else if(valor > 100 && valor <= 500 ){
		valor= valor*0.10;
		printf("O valor descontado é de %.2f", valor);
	}else if(valor > 500){
		valor = valor * 0.20;
		printf("O valor descontado é de %.2f", valor);
	}else{
		printf("Digite um valor válido");
	}
	return 0;
}
