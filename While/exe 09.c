#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i;
	float altura, alturageral, media;
	
	alturageral = 0;
	i = 1;
	
	while(i <= 5){
		printf("Digite sua altura: ");
		scanf("%f", &altura);
			
		alturageral += altura;
		i++;
	}
	media = alturageral / 5;
	
	printf("A média é %2.f", media);
}
