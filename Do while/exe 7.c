#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int I, nota1, nota2, media;

	do{
	printf("Digite sua nota: ");
	scanf("%d", &nota1);
	printf("Digite sua nota: ");
	scanf("%d", &nota2);
	
	media = (nota1 + nota2)/2;
	
	printf("\nSua media é de: %d", media);
	
	I=I + 1;
	
	}while(I <= 10);
	
	}
