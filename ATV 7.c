#include <stdio.h>

int main(){
	
	int A,B,C,R,S,D;
	
	printf("Digite um numero: ");
	scanf("%d", &A);
	printf("Digite outro numero: ");
	scanf("%d", &B);
	printf("Digite mais um numero: ");
	scanf("%d" ,&C);
	
	R = (A+B)*(A+B);
	S = (B+C)*(B+C);
	D = (R+S)/2;
	
	printf("O resultado de D e: %d ", D);
	
	return 0;
	
}
