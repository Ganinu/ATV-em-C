#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL,"portuguese");
	
	int A,B;
	
	printf("Digite um n�mero: ");
	scanf("%d",&A);
	printf("Digite outro n�mero: ");
	scanf("%d",&B);
	
	if(A < B){
		
		printf("A ordem �: %d e %d", A, B);
		
	}
	
	else{
		
		printf("A ordem �: %d e %d", B,A);
		
	}
	
	
		
	}
	
