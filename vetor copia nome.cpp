#include <stdio.h>
#include <string.h>
int main (void){
	char nome[30];
	char sobrenome[30];
	printf ("Digite seu nome: ");
	scanf("%s", nome);
	printf ("Digite seu sobrenome: ");
	scanf("%s", sobrenome);	
	strcpy(nome, sobrenome);
	//strcat(nome, sobrenome);
	printf("%s\n", nome);
	return(0);
}
