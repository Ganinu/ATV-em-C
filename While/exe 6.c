#include <stdio.h> 
#include <locale.h> 


int main(){ 

int T1, suc, ant, num;

setlocale(LC_ALL,"portuguese");

while(T1<= 5){
	
	num = 3;
	suc= num + 1;
	ant= num - 1;
	
	
	printf("\n seu sucessor é %d",suc);
	printf("\nseu antecessor é %d", ant);
	
	T1=T1 + 1;
}


} 
 
