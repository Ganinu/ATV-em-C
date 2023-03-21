#include <stdio.h>
#include <locale.h>

	int main(){
		
		float N1,N2,N3,N4,M;
		
		setlocale(LC_ALL,"portuguese");
	
		printf("Digite sua primeira nota: ");
		scanf("%f",&N1);
		printf("Digite sua segunda nota:  ");
		scanf("%f",&N2);
		printf("Digite sua primeira nota: ");
		scanf("%f",&N3);
		printf("Digite sua segunda nota:  ");
		scanf("%f",&N4);
	
		M = (N1+N2+N3+N4)/4;
		
		if(M >= 5){
			
			printf("Aprovado");
			
		}
		
		else{
			
			printf("Reprovado");
		}
		
	
		

		}
