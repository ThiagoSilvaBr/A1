#include <locale.h>
#include <stdio.h>
#include <time.h> /* necess�rio para usar a fun��o srand que aleatoriza o n�mero gerado pelo hor�rio do sistema*/
#include <stdlib.h>/* necess�rio para usar a fun��o rand */
int main(){
	int num, aleatorio;

	printf("Escreva o n�mero para saber se � maior ou menor que o n�mero desejado: ");
	scanf("%d", &num);
	
	
	
	if(num > aleatorio){
		printf("O n�mero selecionado � menor que o seu: ");
	} else if (num < aleatorio){
		printf("O n�mero selecionado � maior que o seu: "); 
		
	} else if (num == aleatorio) {
		printf("Seu n�mero � igual ao n�mero aleat�rio.");
	} else {
		printf("Digite um n�mero de 1 at� 100.");
		main();
	}
	
	
	srand(time(NULL));
	printf("%d ", rand () % 100);
	
       
 
 return 0;
 
}

