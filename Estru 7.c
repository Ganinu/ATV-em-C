#include <stdio.h>
#include <locale.h>

int main(){
	
	int X;
	
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite um n�mero:  ");
	scanf("%d", &X);
	
	if(X %3 == 0){
		
		printf("Multiplo de tr�s");
		
	}
	
	else{
		
		printf("N�o � multiplo");
		
	}
	
	
}
