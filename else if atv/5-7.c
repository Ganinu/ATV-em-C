#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int peso, excesso, multa;
	
	printf("Digite o peso: ");
	scanf("%d", &peso);
	
	if(peso > 50){
		excesso = peso - 50;
		multa = excesso*4.0;
		
		printf("O excesso foi de %d e a multa foi de %d", excesso, multa);
	}
	
	else{
	
	multa = 0;
	excesso = 0;
		
			printf("Você não precisa pagar multa, pescou nada hein");
	}
	
}
