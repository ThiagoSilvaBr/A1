#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {

    
    char senha[50];
    int senhacorreta, numerodeletras, letracodigo, maiusculas = 0, minusculas = 0, numeros = 0, especiais = 0;

    printf("Digite sua senha com 8 caracteres: ");
    scanf(" %s", senha);
    numerodeletras = strlen(senha);
    senhacorreta = numerodeletras >= 8; //especificando o minimo possivel de caracteres para usar a senha.

    if (senhacorreta) {
    	
    	
		int i = 0; i < numerodeletras; i++;
		
        do
		{

            letracodigo = senha[i];
            if (letracodigo >= 65 && letracodigo <= 90) {   //ponto em que começa e termina as letras maiúsculas da tabela ASCII.
                maiusculas++;
            } else if (letracodigo >= 97 && letracodigo <= 122) {   //ponto em que começa e termina as letras minúsculas da tabela ASCII.
                maiusculas++;
            } else if (letracodigo >= 48 && letracodigo <= 57) {   // de 0 a 10 na tabela ASCII.
                numeros++;
            } else {
                letracodigo++;
            }

        }while(i < numerodeletras;)
        
        if (maiusculas >= 1 && maiusculas >= 1 && numeros >= 1 && especiais >= 1) {	 //Isso deveria ser proibido em 19 países, 8 horas fazendo atividade, sou um clt não remunerado.
            printf("Permitido!");
        } else {
            printf("Negado!");
        }

    } else if (!senhacorreta) { 
        printf("Senha incorreta!");
    }
    
    
    return 0;

}
