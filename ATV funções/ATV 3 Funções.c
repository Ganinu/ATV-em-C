#include <stdio.h>
#include <locale.h>

void verificar(int a, int b, int c){
	
	//se A for maior que B e A for maior que C, exibir a mensagem abaixo
	if(a > b && a > c){
		
		printf("O primeiro número é o maior");
	}
	else{
		//caso B for maior que A e B for maior que C exibir a mensagem abaixo
		if(b > a && b > c){
			printf("O segundo número é maior");
		}
		//se não exibir que o terceiro número é o maior dentre eles
		else{
			
			printf("O terceiro número é o maior ");
		}
	}
	
	
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int num1, num2, num3;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	
	printf("Digite o ultimo número: ");
	scanf("%d", &num3);
	
	verificar(num1,num2,num3);
	
	return 0;
}
