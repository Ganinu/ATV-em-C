#include <stdio.h>
#include <locale.h>

void verificar(int a, int b, int c){
	
	//se A for maior que B e A for maior que C, exibir a mensagem abaixo
	if(a > b && a > c){
		
		printf("O primeiro n�mero � o maior");
	}
	else{
		//caso B for maior que A e B for maior que C exibir a mensagem abaixo
		if(b > a && b > c){
			printf("O segundo n�mero � maior");
		}
		//se n�o exibir que o terceiro n�mero � o maior dentre eles
		else{
			
			printf("O terceiro n�mero � o maior ");
		}
	}
	
	
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int num1, num2, num3;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo n�mero: ");
	scanf("%d", &num2);
	
	printf("Digite o ultimo n�mero: ");
	scanf("%d", &num3);
	
	verificar(num1,num2,num3);
	
	return 0;
}
