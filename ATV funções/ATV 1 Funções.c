#include <stdio.h>
#include <locale.h>

void soma(int a, int b){

	int i, soma;
	
	soma = 0;
	//i � igual a A, e i � maior ou igual a b, logo soma recebe o primeiro n�mero + 1
	for(i = a; i <= b; i++){
	soma = soma + i;
	}
	printf("%d",soma);
}

int main(){
	
	setlocale(LC_ALL,"portuguese");	
	
	int num1, num2;
	
	printf("Digite um n�mero de sua escolha: ");
	scanf("%d", &num1);
	
	printf("Digite mais um n�mero: ");
	scanf("%d", &num2);
	
	//as variaveis precisam subir para a soma, para que o programa n�o quebre
	soma(num1, num2);
	
	return 0;
}
