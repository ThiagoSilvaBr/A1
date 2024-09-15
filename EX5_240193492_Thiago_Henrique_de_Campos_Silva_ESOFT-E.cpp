#include <locale.h>
#include <stdio.h>
#include <time.h> /* necessário para usar a função srand que aleatoriza o número gerado pelo horário do sistema*/
#include <stdlib.h>/* necessário para usar a função rand */
int main(){
	int num, aleatorio;

	printf("Escreva o número para saber se é maior ou menor que o número desejado: ");
	scanf("%d", &num);
	
	
	
	if(num > aleatorio){
		printf("O número selecionado é menor que o seu: ");
	} else if (num < aleatorio){
		printf("O número selecionado é maior que o seu: "); 
		
	} else if (num == aleatorio) {
		printf("Seu número é igual ao número aleatório.");
	} else {
		printf("Digite um número de 1 até 100.");
		main();
	}
	
	
	srand(time(NULL));
	printf("%d ", rand () % 100);
	
       
 
 return 0;
 
}

