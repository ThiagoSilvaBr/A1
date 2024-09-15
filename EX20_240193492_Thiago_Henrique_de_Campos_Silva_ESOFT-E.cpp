#include <stdio.h>
#include <locale.h>
int main(){
	int bissexto;
	printf("Informe um ano: \n");
	scanf("%d", &bissexto);
	if(bissexto%4==0 && bissexto%100 !=0 || bissexto%400 == 0){
		printf("%d eh um ano bissexto. \n", bissexto);
		
	}else{
		printf("%d  nao eh ano bissexto. \n", bissexto);
	}	
	return 0;
}
