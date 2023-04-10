#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int soma, cont;
	
	soma = 0;
	cont = 1;
	
	do{
		soma = soma + cont;
		
		printf("%d \n", soma);
		cont = cont + 1;
		
	}while(cont <= 4);
}
