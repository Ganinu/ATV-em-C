#include <stdio.h> 

#include <locale.h> 

  
int main(){ 

setlocale(LC_ALL,"portuguese"); 

int num1, veri,i; 

printf("                                     ====Olá bem-vindo ao jogo!====\n\nO primeiro usuario deve digitar um número de 1 a 25, e o segundo jogador tem 5 tentativas para acertar esse número"); 

printf("\n\nDigite um número de sua escolha jogador nº1: "); 

scanf("%d", &num1); 

//limpar as informações da tela sem remover 

system("cls"); 

//loop definido a cinco tentativas 

while(i <= 5){ 

//verificar o número digitado pelo jogador 2 

printf("Agora tente acertar o número, jogador nº 2 é a sua vez: "); 

scanf("%d", &veri); 

  

// se os números digitados forem iguais ira exibir a mensagem abaixo 

  

if(veri == num1){ 

printf("Párabens você acertou"); 

//break usado para quebrar o loop do while caso o usuario acerte 

break; 

} 

//contador 

i++; 

}  

// Mensagem a ser exibida após a número de tentativas ser excedido 

if(i > 5){ 

printf("Você passou do limite de tentativas"); 

} 

return 0; 

} 
