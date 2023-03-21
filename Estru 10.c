#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL,"portuguese");
	
	int A,B;
	
	printf("Digite um número: ");
	scanf("%d",&A);
	printf("Digite outro número: ");
	scanf("%d",&B);
	
	if(A < B){
		
		printf("A ordem é: %d e %d", A, B);
		
	}
	
	else{
		
		printf("A ordem é: %d e %d", B,A);
		
	}
	
	
		
	}
	
