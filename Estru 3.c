#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num1,num2,soma;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num1);
	printf("Digite mais um n�mero: ");
	scanf("%d", &num2);
	
	soma=num1+num2;
	
	if(soma > 10){
		
		printf("O n�mero apresentado � maior que 10");
		
	}
	
	else{
		
		printf("O n�mero n�o � maior que 10");
		
	}
	
	
}
