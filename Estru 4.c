#include <stdio.h>
#include <locale.h>

	int main(){
		
		int X;
		
		setlocale(LC_ALL,"portuguese");
		
		
		printf("Digite um número: ");
		scanf("%d", &X);
		
		if(X %3 == 0, X %7 == 0){
			
			
			printf("Este número é divisivel");
			
		}
	
	else{
		
		printf("Este numero não é divisivel");
		
	}
	
		
	}
