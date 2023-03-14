#include <stdio.h>

int main(){
	
	int salario, novosalario, taxa, aumento;
	
	printf("Digite o salario recebido: ");
	scanf("%d", &salario); 
	printf("Digite a taxa de porcentagem de aumento: ");
	scanf("%d", &taxa);
	
	aumento = salario*taxa/100;
	novosalario = salario+aumento;
	
	printf("O seu aumento foi de: %d , e seu novo salario sera: %d ", aumento, novosalario );
	
	return 0;
	
	
	
}
