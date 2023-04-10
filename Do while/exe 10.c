#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");

	int par, num, i;

	do{
		printf("digite um número: ");
		scanf("%d", &num);
		i = i + 1;
		
		if(num % 2 == 0){
		
		par++;
	}
	}while(i <= 5);
	
	printf("O total de números pares é %d",par);
}
