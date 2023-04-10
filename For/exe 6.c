#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int num, suce, ant, i;
	
		for(num = 2; i<= 5; i++){
			
			suce = num + 1;
			ant = num - 1;
			
			printf("\nSeu sucessor é: %d", suce);
			printf("\nSeu antecessor é: %d", ant);
		}
}
	
	
