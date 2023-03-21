#include <stdio.h>
#include <locale.h>

	int main(){
		
		float N1,N2,M;
		
		setlocale(LC_ALL,"portuguese");
	
	
		printf("Digite sua primeira nota: ");
		scanf("%f",&N1);
		printf("Digite sua segunda nota:  ");
		scanf("%f",&N2);
	
		M = (N1+N2)/2;
		
		if(M >= 5){
			
			printf("Aprovado");
			
		}
		
		else{
			
			printf("Reprovado");
		}
		
	
		

		}
