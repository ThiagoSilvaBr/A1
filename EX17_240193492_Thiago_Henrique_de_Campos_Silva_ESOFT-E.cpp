#include <stdio.h>
#include <locale.h>
int main(){
	int cod;
	printf("Digite o c�digo numerico (Ex: 9876543210): ");
	scanf("%d", &cod);
	
	if(cod > 1000000000 && cod%2==0){
		printf("Este c�digo � valido.");
	}else{
		printf("Este c�digo � invalido.");
	}

	return 0;
}
