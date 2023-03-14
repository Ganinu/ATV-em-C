#include <stdio.h>

int main(){
	
	float salarioM, salarioB, salarioL, imposto;
	int horaT, valorHT;
	
	printf("Digite seu salario minimo: ");
	scanf("%f", &salarioM);
	printf("Digite suas horas de escravo: ");
	scanf("%d", &horaT);
	
	valorHT = salarioM/2;
	
	salarioB = horaT*valorHT;
	
	imposto = salarioB*0,03;
	
	salarioL = salarioB-imposto;
	
	printf("Seu saldo liquido e de: %.1f ", salarioL);
	
	return 0;
	
}
