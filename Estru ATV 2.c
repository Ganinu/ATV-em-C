#include <stdio.h> 

#include <locale.h> 


int main(){ 

  

setlocale(LC_ALL, "portuguese"); 

	int num; 

	printf("Digite um número: "); 

	scanf("%d", &num); 

	if (num >= 20){ 

	printf("Maior que 20"); 

} 

else{ 

printf("Menor que 20"); 

} 

return 0; 

} 

 
