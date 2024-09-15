#include <stdio.h>
#include <locale.h>

int main() {
    int numero, i, quadrado;
    
    quadrado = 0;

    
    printf("Digite o numero que deseja saber se é um quadrado perfeito: ");
    scanf("%d", &numero);

    
    for (i = 1; i * i <= numero; i++) {
        if (i * i == numero) {
            quadrado = 1;  
            break;  
        }
    }

    
    if (quadrado) {
        printf("Eh um quadrado perfeito.\n", numero);
    } else {
        printf("Nao eh um quadrado perfeito.\n", numero);
    }

    return 0;
}
