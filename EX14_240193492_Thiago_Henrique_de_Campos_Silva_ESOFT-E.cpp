#include <stdio.h>
#include <locale.h>
int main(){
	char categ;
	float desc, desc2, preco;
	printf("Estamos com promoçoes em livros das categorias terror, suspense e ficçao, pelo valor de 25%, 30%, 18%, porcento, respectivamente. \n");
	printf("Cada livro esta saindo pelo preço de R$30 \n");
	printf("Digite a categoria que deseja comprar o livro: A-terror/ B-suspense/ C-ficçao \n");
	scanf(" %c", &categ);
	
	preco = 30;
	
	if(categ =='A'){
		desc2 = 0.25;
	}
	else if(categ == 'B'){
		desc2 = 0.30;
	}
	else if(categ == 'C'){
		desc2 = 0.18;
	}
	else{
		printf("Digite um valor válido.");
		desc2 = 0;
		
	}
		desc = preco * desc2;
		desc = preco - desc;
		printf("O valor final do livro será : %.2f", desc);
		return 0;
}
