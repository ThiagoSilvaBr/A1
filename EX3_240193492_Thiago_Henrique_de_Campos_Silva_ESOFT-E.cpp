#include <stdio.h>
#include <locale.h>

int main(){
	float salario, salarioFinal, bonus;
	char avaliacao;
	
	printf("Digite o sal�rio do funcion�rio: ");
	scanf("%f", &salario);
	printf("Digite a avalia��o do usu�rio (ex: A, B ou C): ");
	scanf(" %c", &avaliacao);
	
	if(avaliacao=='A'){
		bonus = 0.15;
	
	} else if(avaliacao == 'B'){
		bonus = 0.10;
	} else if(avaliacao== 'C'){
		bonus = 0.05;
	} else{
		printf("Digite um valor v�lido.");
		bonus  = 0;
		main();
	}
		salarioFinal = salario + salario * bonus;
		printf("O sal�rio final ser� : %.2f", salarioFinal);
	return 0;
}
