#include <stdio.h>
#include <locale.h>

int main(){
float gasto, gasolina, km, total;

printf("Digite o quanto seu carro bebe de gasolina por km: \n");
scanf("%f",&gasto);
printf("Digite a cotaçao da gasolina: \n");
scanf("%f",&gasolina);
printf("Digite quantos quilometros irá percorrer: \n");
scanf("%f",&km);

total = (km / gasto) * gasolina;

printf("O custo eh: R$%.2f", total);


return 0;
}
