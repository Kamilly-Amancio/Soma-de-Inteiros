#include <stdio.h>


int main(void){
	
	int n=8,m=4,resultado;
	
	resultado=soma(n,m);
	
	printf("\nSOMA: %i", resultado);
	getch();
	return 0;
	
}
void soma(int a,int b){
	
	int resultado;
	resultado=a+b;
	return(resultado);
	
}

