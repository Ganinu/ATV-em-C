#include <stdio.h> 
#include <locale.h> 


int main(){ 

int cont, nota1, nota2, media; 

for(cont = 1; cont <= 10; cont = cont + 1){ 

	printf("Digite sua nota: ");
 	scanf("%d",&nota1);
 	printf("Digite sua nota: ");
 	scanf("%d", &nota2);
 	
 	media = (nota1 + nota2)/2;
 	
 	printf("Sua media eh de %d \n", media);
 	

} 

} 
