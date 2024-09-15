#include <stdio.h>
#include <locale.h>
int main(){
	int base, km;
	float adicional, valorfinal;
	
	printf("Digite a taxa base da locação do carro:");
	scanf("%d", &base);
	printf("Digite quantos quilometros deseja percorrer: ");
	scanf("%d", &km);
	
	adicional = 0.50;
	valorfinal = base + km * adicional;
	
	printf("O valor total da locação com os quilometros adicionais percorridos será: %.2f",valorfinal);
	
}
