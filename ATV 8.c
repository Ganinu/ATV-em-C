#include <stdio.h>

int main(){
	
	int pesokg, pesog, gato1, gato2, resto, consumototal;
	
	printf("Digite o peso do saco: ");
	scanf("%d", &pesokg);
	
	pesog = pesokg*1000;
	
	printf("Digite quanto seu gato come: ");
	scanf("%d", &gato1);
	printf("Digite quanto seu outro gato come: ");
	scanf("%d", &gato2);
	
	consumototal = 5*(gato1+gato2);
	
	resto = pesog - consumototal;
	
	printf("Sobrara um total de: %d ", resto);
	
	
	return 0;
	
}
