#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i;
	float nota1, nota2, media, mediatotal;
	
	i = 1;
	mediatotal = 0;
	
	while(i <=10){
	
	printf("Digite sua nota: ");
	scanf("%f", &nota1);
	printf("Digite sua segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota1+nota2)/2;
	
	mediatotal = mediatotal + media;
	
	printf("\nA sua nota final: %d\n\n", media);
	
	i++;
	
	}
	mediatotal = mediatotal/10;
	
	printf("A nota geral: %f",mediatotal);
}
