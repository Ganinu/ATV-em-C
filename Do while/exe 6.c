#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int num, suc, ant, i;
	
	do{
		
	printf("Digite um número: ");
	scanf("%d", &num);
	
	suc = num + 1;
	ant = num - 1;
	
	printf("O sucessor é %d e o antecessor e %d\n", suc, ant);

	i=i+1;
	
	}while(i<=5);
}
	
	
	
