#include <stdio.h> 

#include <locale.h> 

  
int main(){ 

setlocale(LC_ALL,"portuguese"); 

int num1, veri,i; 

printf("                                     ====Ol� bem-vindo ao jogo!====\n\nO primeiro usuario deve digitar um n�mero de 1 a 25, e o segundo jogador tem 5 tentativas para acertar esse n�mero"); 

printf("\n\nDigite um n�mero de sua escolha jogador n�1: "); 

scanf("%d", &num1); 

//limpar as informa��es da tela sem remover 

system("cls"); 

//loop definido a cinco tentativas 

while(i <= 5){ 

//verificar o n�mero digitado pelo jogador 2 

printf("Agora tente acertar o n�mero, jogador n� 2 � a sua vez: "); 

scanf("%d", &veri); 

  

// se os n�meros digitados forem iguais ira exibir a mensagem abaixo 

  

if(veri == num1){ 

printf("P�rabens voc� acertou"); 

//break usado para quebrar o loop do while caso o usuario acerte 

break; 

} 

//contador 

i++; 

}  

// Mensagem a ser exibida ap�s a n�mero de tentativas ser excedido 

if(i > 5){ 

printf("Voc� passou do limite de tentativas"); 

} 

return 0; 

} 
