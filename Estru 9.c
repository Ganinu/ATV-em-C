#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL,"portuguese");
		
		int Sal,Nsal;
		
		printf("Digite seu sal�rio: ");
		scanf("%d", &Sal);
		
		if(Sal <= 300){
			
		Nsal = Sal*35/100+Sal;
		
		printf("Esse � seu novo salario: %d ", Nsal);	
		
			
		} 
		
		else{
			
			Nsal = Sal*15/100+Sal;
			
			printf("Seu salario novo �: %d", Nsal);
			
		}
		
		
		
	}
