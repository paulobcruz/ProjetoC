#include <stdio.h>

void funcionou();
void sair();
int main(){
	funcionou();
	return 0;
}

void funcionou(){
	printf("Funcionou!");
}

void sair(){
	exit(0);	
}
