#include <stdio.h> 
#include <locale.h> 

  

int main(){ 

int T1, nota1,nota2, media;

while(T1 <= 10){
	
	printf("Digite sua nota: ");
	scanf("%d", &nota1);
	printf("Digite sua nota: ");
	scanf("%d",&nota2);
	
	media = (nota1 + nota2)/2;
	
	printf("\nSua media eh: %d", media);
	
	T1=T1 + 1;
}


} 
 
