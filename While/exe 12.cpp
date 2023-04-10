#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i, apv, rep, exame;
	
	float nota1, nota2, media;
	
	i = 1;
	
	while(i <= 60){
		
		printf("Insira a primeira nota: ");
		scanf("%f", &nota1);
		
		printf("Insira a segunda nota: ");
		scanf("%f", &nota2);
		
		media = (nota1 + nota2) / 2;
		
		apv = 0;
	
		rep = 0;
	
		exame = 0;
		
		if(media >= 5){
			
			apv += 1;
			
		}
		else{
			
			if(media < 3){
				
				rep += 1;
				
			}
			else{
				
				exame += 1;
				
			}
		}
		
		i++;
		
	}
	
	printf("Alunos aprovados: %d\nAlunos reprovados: %d\nExame: %d", apv, rep, exame);
	
	return 0;
}
