#include <stdio.h>
#include <locale.h>
int main(){
	float celcius, fahre;
	printf("Informe a temperatura (Em Celcius): ");
	scanf("%f", &celcius);
	
	fahre = 1.8*celcius + 32;
	printf("A temperatura de Celcius para Fahrenheit é: %.2f", fahre);
	
	
	return 0;
}
