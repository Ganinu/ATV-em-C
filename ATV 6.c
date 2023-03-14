#include <stdio.h>

int main(){
	
	int X, Y, auxiliar;
	
	printf("Digite um numero para X: ");
	scanf("%d", &X);
	printf("Digite outro numero para Y: ");
	scanf("%d", &Y);
	
	auxiliar = X;
	X = Y;
	Y = auxiliar;
	
	printf("Olha o resultado de X aqui mano: %d\n", X );
	printf("Olha o outro resultado mano, agora o de Y: %d ", Y );
	
	return 0;
	
}
