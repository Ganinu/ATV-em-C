#include <stdio.h>
#include <locale.h>

void verificar(int a, int b){
	
	if(a > b){
	
	printf("O maior n�mero �: %d", a);
	}
	
	else{
		
		printf("O maior n�mero �: %d", b);
	}
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int num1, num2;
	
	printf("Digite um n�mero de sua escolha: ");
	scanf("%d", &num1);
	
	printf("Digite mais um n�mero: ");
	scanf("%d", &num2);
	
	verificar(num1,num2);
	
	return 0;
}
