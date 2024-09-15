#include <stdio.h>
#include <locale.h>
int main(){
	int x, y, z;
	printf("Digite um lado do triangulo: ");
	scanf("%d",&x);
	printf("Digite um lado do triangulo: ");
	scanf("%d",&y);
	printf("Digite um lado do triangulo: ");
	scanf("%d",&z);
	
	if(x==0 || y==0 || z==0){
		printf("Digite valores diferentes de 0(zero).");
	}else if(x==y && x==z && y==z){
		printf("Seu triangulo eh equilatero.");
	}else if(x!=y && y!=z){
		printf("Seu triangulo eh escaleno.");
	}else if(x==y || y==z){
		printf("Seu triangulo eh isoceles.");
	}
	return 0;
}
