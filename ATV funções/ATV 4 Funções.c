#include <stdio.h>
#include <locale.h>

void subrotina01(){
	printf("Voc� escolheu adi��o\n");
	system("pause");
}

void subrotina02(){
	printf("Voc� escolheu subtra��o\n");
	system("pause");
}

void subrotina03(){
	printf("Voc� escolheu divis�o\n");
	system("pause");
}

void subrotina04(){
	printf(" Voc� escolheu multiplica��o\n\n");
	system("pause");
}

int main(){
	int op;
	
	setlocale(LC_ALL,"portuguese");
	
	do{
		system("cls");
		printf("****** Menu *******\n");
		printf("1 - Adi��o \n");
		printf("2 - Subtra��o \n");
		printf("3 - Divis�o \n");
		printf("4 - Multiplica��o \n");
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
