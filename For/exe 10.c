#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i, num, par;
	
	for( i = 1; i <= 30; i++){
		
		printf("Digite um número: ");
		scanf("%d", &num);
		
		if(num % 2 == 0){
			
			par++;
		}
		
	}
	printf("A quantidade de números pares é %d", par); 
}

