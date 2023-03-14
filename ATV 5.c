#include <stdio.h>

int main(){
	
	int idade, anoatual, anonasc, idade2012;
	
	printf("Digite o ano atual: ");
	scanf("%d", &anoatual );
	printf("Digite o seu ano de nascimento: ");
	scanf("%d", &anonasc);
	
	 idade = anoatual - anonasc;
	 
	 idade2012 = 2012 - anonasc;
	 
	 printf("Sua idade atual e: %d e voce tera %d em 2012 ", idade, idade2012);
	 
	 
	 return 0;
	
	
}
