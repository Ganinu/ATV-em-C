#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i;
	float altura, media, soma;
	soma = 0;
	
	for(i = 1; i <= 5; i = i +1){
		printf("Digite sua altura: ");
		scanf("%f", &altura);
		
		soma += altura;
	}
	media = soma / 5;
	printf("A média das alturas é: %2.f", media);
}
