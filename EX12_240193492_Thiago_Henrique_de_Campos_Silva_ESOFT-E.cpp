#include <stdio.h>
#include <locale.h>
int main(){
	int base, km;
	float adicional, valorfinal;
	
	printf("Digite a taxa base da loca��o do carro:");
	scanf("%d", &base);
	printf("Digite quantos quilometros deseja percorrer: ");
	scanf("%d", &km);
	
	adicional = 0.50;
	valorfinal = base + km * adicional;
	
	printf("O valor total da loca��o com os quilometros adicionais percorridos ser�: %.2f",valorfinal);
	
}
