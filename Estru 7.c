#include <stdio.h>
#include <locale.h>

int main(){
	
	int X;
	
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite um número:  ");
	scanf("%d", &X);
	
	if(X %3 == 0){
		
		printf("Multiplo de três");
		
	}
	
	else{
		
		printf("Não é multiplo");
		
	}
	
	
}
