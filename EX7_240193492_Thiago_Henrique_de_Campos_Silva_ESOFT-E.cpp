#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	char nome [50], nomereal [50];
	int senha, senhareal;
	
	
	printf("Cadastrar-se \n");
	printf("Digite seu nome de usu�rio que deseja cadastrar: ");
	scanf(" %s", &nomereal);
	printf("Digite sua senha que deseja cadastrar: ");
	scanf("%d", &senhareal);
	
	
	printf("Logar-se \n");
	printf("Digite seu nome de usu�rio: ");
	scanf(" %s", &nome);
	printf("Digite sua senha: ");
	scanf("%d", &senha); 
	
	
	
	if(nomereal != nome || senhareal != senha){
		printf("Acesso concedido.");
	} else if(nomereal == nome || senhareal == senha){
		printf("Acesso negado."); /*Gostosin, estou ficando louco, � um s�bado 8 da manh� e eu to nisso a mais de 40 minutos,
								  /* quase tudo da certo, s� a parte de falar que o acesso est� concedido ou n�o, provavelmente
	}							  /* � algo muito simples, mas para minha vis�o atual de mundo � algo que n�o existe, desculpa
								  /* pelo desabafo.*/
	
	return 0;
	}
}

