#include <stdio.h>
#include <locale.h>

	int main(){
		
		int X;
		
		setlocale(LC_ALL,"portuguese");
		
		
		printf("Digite um n�mero: ");
		scanf("%d", &X);
		
		if(X %3 == 0, X %7 == 0){
			
			
			printf("Este n�mero � divisivel");
			
		}
	
	else{
		
		printf("Este numero n�o � divisivel");
		
	}
	
		
	}
