#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL,"portuguese");
		
		int Sal,Nsal;
		
		printf("Digite seu salário: ");
		scanf("%d", &Sal);
		
		if(Sal <= 300){
			
		Nsal = Sal*35/100+Sal;
		
		printf("Esse é seu novo salario: %d ", Nsal);	
		
			
		} 
		
		else{
			
			Nsal = Sal*15/100+Sal;
			
			printf("Seu salario novo é: %d", Nsal);
			
		}
		
		
		
	}
