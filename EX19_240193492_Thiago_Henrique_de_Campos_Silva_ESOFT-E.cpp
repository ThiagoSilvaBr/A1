#include <stdio.h>
#include <locale.h>
int main(){
	float sensacaoTermica, temperatura, umidade;	
	printf("Digite a temperatura: ");
	scanf("%d", &temperatura);
	printf("Digite a umidade: ");
	scanf("%d", &umidade);
	
	sensacaoTermica = 33+(10%10.45-umidade)*((temperatura-33))/22;
	
	printf("A sensação termica é de :%.2f", sensacaoTermica);

	
	
	
	
	return 0;
}
