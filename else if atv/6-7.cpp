#include <stdio.h>
#include <locale.h>

int main(){
	
	char sexo;
	float altura;
	float homem, mulher;
	
	setlocale(LC_ALL,"portuguese");
	
		printf("Digite F para feminino e M para masculino:\n ");
	scanf("%c",&sexo);
	
		printf("Digite sua altura:\n ");
	scanf("%f",&altura);
	
	
	if(sexo=='F'|| sexo=='f'){
		mulher = (62.1*altura) - 44.7;
		printf("Este é o seu peso ideal: %2.f", mulher);
	}
	else{
		if(sexo =='M' || sexo=='m'){
			homem = (72.7*altura) - 58;
				printf("Este é seu peso ideal: %2.f",homem);
			}
			else{
				if(sexo != 'm', sexo != 'M',sexo != 'f',sexo != 'F')
				printf("Digite algo valido!!");
				
			}
	}
}
