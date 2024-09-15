#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	char nome [50], nomereal [50];
	int senha, senhareal;
	
	
	printf("Cadastrar-se \n");
	printf("Digite seu nome de usuário que deseja cadastrar: ");
	scanf(" %s", &nomereal);
	printf("Digite sua senha que deseja cadastrar: ");
	scanf("%d", &senhareal);
	
	
	printf("Logar-se \n");
	printf("Digite seu nome de usuário: ");
	scanf(" %s", &nome);
	printf("Digite sua senha: ");
	scanf("%d", &senha); 
	
	
	
	if(nomereal != nome || senhareal != senha){
		printf("Acesso concedido.");
	} else if(nomereal == nome || senhareal == senha){
		printf("Acesso negado."); /*Gostosin, estou ficando louco, é um sábado 8 da manhã e eu to nisso a mais de 40 minutos,
								  /* quase tudo da certo, só a parte de falar que o acesso está concedido ou não, provavelmente
	}							  /* é algo muito simples, mas para minha visão atual de mundo é algo que não existe, desculpa
								  /* pelo desabafo.*/
	
	return 0;
	}
}

