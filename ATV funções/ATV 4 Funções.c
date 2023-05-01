#include <stdio.h>
#include <locale.h>

void subrotina01(){
	printf("Você escolheu adição\n");
	system("pause");
}

void subrotina02(){
	printf("Você escolheu subtração\n");
	system("pause");
}

void subrotina03(){
	printf("Você escolheu divisão\n");
	system("pause");
}

void subrotina04(){
	printf(" Você escolheu multiplicação\n\n");
	system("pause");
}

int main(){
	int op;
	
	setlocale(LC_ALL,"portuguese");
	
	do{
		system("cls");
		printf("****** Menu *******\n");
		printf("1 - Adição \n");
		printf("2 - Subtração \n");
		printf("3 - Divisão \n");
		printf("4 - Multiplicação \n");
		printf("0 - Sair \n");
		printf("Entre com a opcao desejada: ");
		scanf("%d", &op);
		
		switch(op){
			case 0:
				printf("Fim do programa!!");
				break;
			case 1:
				subrotina01();
				break;
			case 2:
				subrotina02();
				break;
			case 3:
				subrotina03();
				break;
			case 4:
				subrotina04();
		}
			
	}while(op != 0);
	
	return 0;
}
