#include <stdio.h>
#include <locale.h>

int main(){
	int num;
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	if(num <= 1){
		printf("O n�mero selecionado n�o � primo.");
	}else{
		for(int i=2; i < num; i++){
			if(num%i==0){
				printf("Ele n�o � primo");
				break;
			}
		}
		if(num){
			printf("O n�mero � primo.");
		}
	}
	
		
	
}
