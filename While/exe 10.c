#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int num, par, i;
	
	while(i <= 30){
		
	printf("digite um n�mero: ");
	scanf("%d", &num);
	i = i + 1;
	
	}
	if(num % 2 == 0){
		par++;
	}
	printf("o total de pares s�o: %d", par);
}
