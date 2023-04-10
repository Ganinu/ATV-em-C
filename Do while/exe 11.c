#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int nota1,nota2, media, mediatotal, i;

	do{
		printf("Digite sua nota: ");
		scanf("%d", &nota1);
		printf("Digite sua outra nota: ");
		scanf("%d", &nota2);
		
		media = (nota1 + nota2)/2;
		
		printf("\nSua media total: %d\n\n", media);
		
		mediatotal = mediatotal +  media;
		
		i = i + 1;
		
	}while(i <= 10);
	
	printf("\nA nota geral da escola foi: %d\n\n ",mediatotal);	
}
