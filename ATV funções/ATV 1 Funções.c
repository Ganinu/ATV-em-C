#include <stdio.h>
#include <locale.h>

void soma(int a, int b){

	int i, soma;
	
	soma = 0;
	//i é igual a A, e i é maior ou igual a b, logo soma recebe o primeiro número + 1
	for(i = a; i <= b; i++){
	soma = soma + i;
	}
	printf("%d",soma);
}

int main(){
	
	setlocale(LC_ALL,"portuguese");	
	
	int num1, num2;
	
	printf("Digite um número de sua escolha: ");
	scanf("%d", &num1);
	
	printf("Digite mais um número: ");
	scanf("%d", &num2);
	
	//as variaveis precisam subir para a soma, para que o programa não quebre
	soma(num1, num2);
	
	return 0;
}
