#include <stdio.h>
#include <locale.h>
int main(){
	int juros, periodo, capital;
	float montante;
	
	printf("Digite o total de juros dentro do seu investimento: ");
	scanf("%d", &juros);
	printf("Digite o periodo do investimento (Ex:2, 3, 6): ");
	scanf("%d", &periodo);
	printf("Digite seu capital dentro da �rea investida: ");
	scanf("%d", &capital);
	
	montante = (1+juros)*periodo;
	montante = montante * capital;
	
	printf("O seu montante referido as suas especifica��es mencionadas anteriormente ser�: %.2f", montante);
	return 0;			
}
