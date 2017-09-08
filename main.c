#include <stdio.h>

float velocidadeMedia(int tempo, float espaco);
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

float velocidadeMedia(int tempo, float espaco){
	return espaco/tempo;
}