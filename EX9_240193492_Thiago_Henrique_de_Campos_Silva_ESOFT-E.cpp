#include <stdio.h>
#include <locale.h>

int main(){
	int num;
	printf("Digite um número: ");
	scanf("%d", &num);
	
	if(num <= 1){
		printf("O número selecionado não é primo.");
	}else{
		for(int i=2; i < num; i++){
			if(num%i==0){
				printf("Ele não é primo");
				break;
			}
		}
		if(num){
			printf("O número é primo.");
		}
	}
	
		
	
}
