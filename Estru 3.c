#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num1,num2,soma;
	
	printf("Digite um número: ");
	scanf("%d", &num1);
	printf("Digite mais um número: ");
	scanf("%d", &num2);
	
	soma=num1+num2;
	
	if(soma > 10){
		
		printf("O número apresentado é maior que 10");
		
	}
	
	else{
		
		printf("O número não é maior que 10");
		
	}
	
	
}
