#include <stdio.h>
#include <locale.h>
int main(){
	int cod;
	printf("Digite o código numerico (Ex: 9876543210): ");
	scanf("%d", &cod);
	
	if(cod > 1000000000 && cod%2==0){
		printf("Este código é valido.");
	}else{
		printf("Este código é invalido.");
	}

	return 0;
}
