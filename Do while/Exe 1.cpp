#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int I;

	do{
	printf("%d \n",I);
	I=I + 1;
	
	}while(I <= 25);
	
	}
