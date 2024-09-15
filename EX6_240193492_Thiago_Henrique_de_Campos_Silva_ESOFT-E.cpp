#include <stdio.h>
#include <locale.h>
int main(){
	int sapatos, camisetas, bermudas;
	float desconto, total1, total2, total3, totalfinal;
	printf("Preços - \nA-sapatos-R$399,90\nB-camisetas-R$150,00\nC-bermudas-R$70,00. \n");
	printf("Calçados com (30 porcento) off, camisetas com (15 porcento)off e bermudas com (20 porcento)off \n");
	
	printf("Quantos calçados deseja comprar: ");
	scanf("%d", &sapatos);
	printf("Quantos camisetas deseja comprar: ");
	scanf("%d", &camisetas);
	printf("Quantos bermudas deseja comprar: ");
	scanf("%d", &bermudas);
	
	
	total1 = 0.30* (sapatos*399,90);
	total2 = 0.15* (camisetas*150);
	total3 = 0.20* (bermudas*70);
		
	totalfinal = total1+total2+total3;
	printf("O valor total da compra é: %f", totalfinal);
	
	
	
	return 0;
}
