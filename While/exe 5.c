#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");

	int i;
	
	while(i <= 20){
	
	printf("%d \n", i);
	i = i + 2;	
	}
}
