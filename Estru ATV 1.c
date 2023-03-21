#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	char sexo;
	
	printf("Digite F para feminino e M para masculino: ");
	scanf("%c", &sexo);
	
	
	if(sexo=='F',sexo=='f'){
		
		printf("Você é mulher");
		
	}
		
		else if(sexo=='M',sexo=='m'){
			
			printf("Você é homem");
			
		}
		
		
		
		
		return 0;
	
	}
	
	
