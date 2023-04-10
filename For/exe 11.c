#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
int nota1, nota2, media, mediatotal,i;

for(i = 1; i <= 10; i++){
	
	printf("Digite sua nota: ");
	scanf("%d", &nota1);
	printf("Digite sua nota: ");
	scanf("%d", &nota2);
	
	media = (nota1 + nota2)/2;
	mediatotal = mediatotal + media;
	
	printf("\nSua média foi de: %d\n\n", media);
}

	printf("\nA nota geral da escola é: %d\n\n", mediatotal);
	
}
