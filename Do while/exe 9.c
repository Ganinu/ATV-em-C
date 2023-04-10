#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");

	int i;
	float altura, alturageral, media;
	
	i = 1;
	alturageral = 0;
	
	do{
		printf("Digite sua altura: ");
		scanf("%f", &altura);
		
		alturageral += altura;
		
		media = alturageral / 5;
		i = i + 1;
		
	}while(i <= 5);
	
	printf("A média é: %.2f", media);
	
}
