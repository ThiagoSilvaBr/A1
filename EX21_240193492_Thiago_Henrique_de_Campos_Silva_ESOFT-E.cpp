#include <stdio.h>
#include <locale.h>
int main(){
	float emprestimo, juros, parcela, final;
		printf("Digite a quantidade que deseja retirar de emprestimo: ");
		scanf("%f", &emprestimo);
		printf("Digite o numero de juros(Ex: taxa de juros de R$ 73,60): ");
		scanf("%f", &juros);
		printf("Digite a quantidade de parcelas(Ex: 12 meses): ");
		scanf("%f", &parcela);
		
		final = (emprestimo+juros)/parcela;
		
		printf("Dentro do prazo de pagamento da parcela de %.2f o pagamento será: %.2f", parcela, final);
		

	
	
	
	
	return 0;
}
