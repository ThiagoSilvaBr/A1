#include <stdio.h>
#include <locale.h>
int main(){
	char categ;
	float desc, desc2, preco;
	printf("Estamos com promo�oes em livros das categorias terror, suspense e fic�ao, pelo valor de 25%, 30%, 18%, porcento, respectivamente. \n");
	printf("Cada livro esta saindo pelo pre�o de R$30 \n");
	printf("Digite a categoria que deseja comprar o livro: A-terror/ B-suspense/ C-fic�ao \n");
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
		printf("Digite um valor v�lido.");
		desc2 = 0;
		
	}
		desc = preco * desc2;
		desc = preco - desc;
		printf("O valor final do livro ser� : %.2f", desc);
		return 0;
}
